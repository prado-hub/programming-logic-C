#include <stdio.h>

int main()
{
  int volume, kg, comprimento, altura, largura;
  printf("digite a quantidade de volumes: \n");
  scanf("%d", &volume);
  printf("digite as informações complementares: \n");
  scanf("%d%d%d%d", &kg, &comprimento, &altura, &largura);

  if ((volume < 2) & (kg <= 15) & (comprimento + altura + largura < 158))
  {
    printf("ok\n");
  }
  else
  {
    if (volume > 1)
    {
      printf("excesso de volume\n");
    }
    else
    {
      if (kg > 15)
      {
        printf("excedeu 15kg\n");
      }
      if (comprimento + altura + largura > 158)
      {
        printf("excede 158cm\n");
      }
    }
  }

  return 0;
}