#include <stdio.h>

int main()
{
  int T;
  scanf("%d", &T);
  for (int i = 0; i < T; i++)
  {
    int PA, PB, contAnos = 0;
    double G1, G2;
    scanf("%d %d", &PA, &PB);
    scanf("%lf %lf", &G1, &G2);

    while (PA <= PB && contAnos < 100)
    {
      double totalAttA = (PA * G1 / 100) + PA;
      double totalAttB = (PB * G2 / 100) + PB;
      PA = totalAttA;
      PB = totalAttB;
      contAnos++;
    }

    if (contAnos < 100)
    {
      printf("%d anos.\n", contAnos);
    }
    else
    {
      printf("Mais de 1 seculo.\n");
    }
  }
  return 0;
}