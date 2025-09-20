#include <stdio.h>

int main()
{
  int n;
  double total = 0, totalC = 0, totalR = 0, totalS = 0;

  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    double quantity;
    char type;
    scanf("%lf", &quantity);
    scanf(" %c", &type);

    total += quantity;

    if (type == 'C')
    {
      totalC += quantity;
    }

    if (type == 'R')
    {
      totalR += quantity;
    }

    if (type == 'S')
    {
      totalS += quantity;
    }
  }

  double percentualC = (totalC / total) * 100;
  double percentualR = (totalR / total) * 100;
  double percentualS = (totalS / total) * 100;

  printf("Total: %.0lf cobaias\n", total);
  printf("Total de coelhos: %.0lf\n", totalC);
  printf("Total de ratos: %.0lf\n", totalR);
  printf("Total de sapos: %.0lf\n", totalS);
  printf("Percentual de coelhos: %.2lf %%\n", percentualC);
  printf("Percentual de ratos: %.2lf %%\n", percentualR);
  printf("Percentual de sapos: %.2lf %%\n", percentualS);

  return 0;
}