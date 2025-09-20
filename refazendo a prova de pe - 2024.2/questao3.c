#include <stdio.h>

int main()
{
  int jogador1, jogador2;
  do
  {
    scanf("%d", &jogador1);
    if (jogador1 < 0 || jogador1 > 20)
    {
      printf("numero invalido\n");
    }
  } while (jogador1 < 0 || jogador1 > 20);
  printf("é sua vez jogador 2\n");

  for (int chance = 1; chance <= 6; chance++)
  {

    printf("chance %d\n", chance);
    scanf("%d", &jogador2);
    if (jogador2 == jogador1)
    {
      printf("igual a senha!");
      break;
    }
    else if ((jogador2 == jogador1 + 1) || (jogador2 == jogador1 - 1))
    {
      printf("Quente!\n");
    }
    else if (jogador2 > jogador1)
    {
      printf("maior!\n");
    }
    else if (jogador2 < jogador1)
    {
      printf("menor!\n");
    }
    if (chance == 6)
    {
      printf("fim da partida e senha não quebrada\n");
      break;
    }
  }
  return 0;
}
