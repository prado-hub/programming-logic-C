#include <stdio.h>

int main()
{
  int numero_casos, cont_casos = 0;
  scanf("%d", &numero_casos);

  while (cont_casos != numero_casos)
  {
    int N, sum = 0;
    scanf("%d", &N);

    for (size_t i = 1; i < N; i++)
    {
      if (N % i == 0)
      {
        sum += i;
      }
    }

    if (sum == N)
    {
      printf("%d eh perfeito\n", N);
    }
    else
    {
      printf("%d nao eh perfeito\n", N);
    }
    cont_casos++;
  }

  return 0;
}