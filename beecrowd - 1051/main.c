#include <stdio.h>
int main()
{
  double salary, imposto;

  scanf("%lf", &salary);

  if (salary <= 2000)
  {
    printf("Isento\n");
  }
  else if (salary > 2000 && salary <= 3000)
  {
    imposto = (salary - 2000) * 8 / 100;
    printf("R$ %.2lf\n", imposto);
  }
  else if (salary > 3000 & salary <= 4500)
  {
    imposto = (((salary - 2000) - (salary - 3000)) * 8 / 100) + ((salary - 3000) * 18 / 100);
    printf("R$ %.2lf\n", imposto);
  }
  else if (salary > 4500)
  {
    double faixa1 = (((salary - 2000) - (salary - 3000)) * 8 / 100);
    double faixa2 = (((salary - 3000) - (salary - 4500)) * 18 / 100);
    double faixa3 = (salary - 4500) * 28 / 100;
    imposto = faixa1 + faixa2 + faixa3;
    printf("R$ %.2lf\n", imposto);
  }

  return 0;
}