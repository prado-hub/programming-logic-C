#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  printf("%d %d %d PUM\n", 1, 2, 3);
  for (int i = 1; i < n; i++)
  {
    int fator = 4 * i;
    printf("%d %d %d PUM\n", 1 + fator, 2 + fator, 3 + fator);
  }
  return 0;
}