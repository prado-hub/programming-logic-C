#include <stdio.h>

int main()
{
  int m, n;
  while (1)
  {
    int sum = 0;
    scanf("%d %d", &m, &n);
    if (m <= 0 || n <= 0)
    {
      break;
    }

    if (n > m)
    {
      int aux = n;
      n = m;
      m = aux;
    }

    for (int i = n; i <= m; i++)
    {
      printf("%d ", i);
      sum += i;
    }
    printf("Sum=%d\n", sum);
  }
  return 0;
}