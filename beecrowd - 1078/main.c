#include <stdio.h>
int main()
{
  int N;
  scanf("%d", &N);

  for (size_t i = 1; i < 11; i++)
  {
    int resultado = i * N;
    printf("%d x %d = %d\n", i, N, resultado);
  }

  return 0;
}