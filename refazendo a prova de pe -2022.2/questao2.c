#include <stdio.h>

int main()
{
  int somaPares = 0;
  int produtoImpares = 1;
  int num;

  for (int i = 0; i < 100; i++)
  {
    scanf("%d", &num);
    if (num % 2 == 0)
    {
      somaPares += num;
    }
    else
    {
      produtoImpares *= num;
    }
  }

  printf("%d\n", somaPares);
  printf("%d\n", produtoImpares);
  return 0;
}