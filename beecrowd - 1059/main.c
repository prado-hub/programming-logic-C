#include <stdio.h>

int main()
{
  for (size_t i = 1; i < 101; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d\n", i);
    }
  }
  return 0;
}