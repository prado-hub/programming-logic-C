#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);
  for (size_t i = 1; i <= N; i++)
  {
    printf("%d %d %d", i, i * i, i * i * i);
    printf("\n");
  }

  return 0;
}