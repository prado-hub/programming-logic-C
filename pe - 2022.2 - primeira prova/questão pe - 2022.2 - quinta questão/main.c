#include <stdio.h>
#include <math.h>

int main()
{
  int x1, x2, result;

  for (size_t i = 1000; i < 9999; i++)
  {
    x1 = i / 100;
    x2 = i % 100;
    result = (x1 + x2) * (x1 + x2);
    if (result == i)
    {
      printf("o numero %d é tal propriedade\n", i);
    }
  }
  return 0;
}