#include <stdio.h>

int main()
{
  for (int i = 1000; i < 10000; i++)
  {
    int x = i / 100;
    int y = i % 100;
    int resultado = (x + y) * (x + y);
    if (resultado == i)
    {
      printf("%d cumpre tal propriedade\n", i);
    }
  }
  return 0;
}
