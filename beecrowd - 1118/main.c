#include <stdio.h>

int main()
{
  while (1)
  {
    int op;
    double n1, n2, media;
    do
    {
      scanf("%lf", &n1);
      if (n1 < 0 || n1 > 10)
      {
        printf("nota invalida\n");
      }
    } while (n1 < 0 || n1 > 10);

    do
    {
      scanf("%lf", &n2);
      if (n2 < 0 || n2 > 10)
      {
        printf("nota invalida\n");
      }
    } while (n2 < 0 || n2 > 10);

    media = (n1 + n2) / 2.0;
    printf("media = %.2lf\n", media);

    do
    {
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &op);
    } while (op < 1 || op > 2);
    if (op == 2)
    {
      break;
    }
  }
  return 0;
}