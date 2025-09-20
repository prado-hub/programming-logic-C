#include <stdio.h>

int main()
{
  int quantity;
  double custo;
  scanf("%d", &quantity);

  if (quantity < 12)
  {
    custo = quantity * 2.30;
    printf("%.2lf", custo);
  }
  else
  {
    custo = quantity * 2.00;
    printf("%.2lf", custo);
  }
  return 0;
}