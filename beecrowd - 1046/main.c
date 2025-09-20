#include <stdio.h>

int main()
{
  int h_inicial, h_final, h_total;
  scanf("%d %d", &h_inicial, &h_final);
  if (h_inicial > h_final)
  {
    h_total = (24 - h_inicial) + h_final;
  }
  else if (h_final == h_inicial)
  {
    h_total = 24;
  }
  else
  {
    h_total = h_final - h_inicial;
  }

  printf("O JOGO DUROU %d HORA(S)", h_total);
  return 0;
}