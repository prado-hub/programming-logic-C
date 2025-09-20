#include <stdio.h>

int main()
{
  int N;
  int sumIn = 0, sumOut = 0;
  scanf("%d", &N);
  int test[N];

  for (size_t i = 0; i < N; i++)
  {
    scanf("%d", &test[i]);
  }

  for (size_t i = 0; i < N; i++)
  {
    if (test[i] >= 10 && test[i] <= 20)
    {
      sumIn++;
    }
    else
    {
      sumOut++;
    }
  }

  printf("%d in\n", sumIn);
  printf("%d out\n", sumOut);

  return 0;
}