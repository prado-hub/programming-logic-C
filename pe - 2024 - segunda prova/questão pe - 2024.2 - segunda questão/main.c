#include <stdio.h>

int main()
{
  double volumes, peso, altura, largura, comprimento;
  scanf("%lf %lf %lf %lf %lf", &volumes, &peso, &altura, &largura, &comprimento);

  if (volumes > 1)
  {
    printf("Excesso de volume \n");
  }
  else if (peso > 15)
  {
    printf("Excedeu 15kg \n");
  }
  else if (peso + altura + comprimento > 158)
  {
    printf("Excedeu 158cm\n");
  }
  else
  {
    printf("OK!\n");
  }

  return 0;
}