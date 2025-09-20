#include <stdio.h>

int main()
{
  int A, B;
  scanf("%d %d", &A, &B);

  if (A > B)
  {
    int aux = A;
    A = B;
    B = aux;
  }

  if (B % A == 0)
  {
    printf("Sao Multiplos\n");
  }
  else
  {
    printf("Nao sao Multiplos\n");
  }
  return 0;
}