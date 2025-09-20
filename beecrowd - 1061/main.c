#include <stdio.h>

int main()
{
  int Do, ho, mo, so;
  int Df, hf, mf, sf;

  scanf(" Dia %d", &Do);
  scanf(" %d : %d : %d", &ho, &mo, &so);
  scanf(" Dia %d", &Df);
  scanf(" %d : %d : %d", &hf, &mf, &sf);

  int t1 = ((Do * 24 + ho) * 3600) + (mo * 60) + so;
  int t2 = ((Df * 24 + hf) * 3600) + (mf * 60) + sf;

  int total = t2 - t1;

  int dias = total / (24 * 3600);
  total %= 24 * 3600;

  int horas = total / 3600;
  total %= 3600;

  int minutos = total / 60;
  total %= 60;

  int segundos = total;

  printf("%d dia(s)\n", dias);
  printf("%d hora(s)\n", horas);
  printf("%d minutos(s)\n", minutos);
  printf("%d segundos(s)\n", segundos);
  return 0;
}