#include <stdio.h>

int main()
{
  int t;
  int resp;
  int sumAcertos = 0;
  scanf("%d", &t);
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &resp);
    if (resp == t)
    {
      sumAcertos++;
    }
  }
  printf("%d\n", sumAcertos);
  return 0;
}