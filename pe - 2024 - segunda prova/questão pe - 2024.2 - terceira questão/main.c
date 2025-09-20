#include <stdio.h>
#include <stdlib.h>

int main()
{
  int jogador1, jogador2;
  int chances = 6, contador, op;
  system("clear");
  printf("deseja jogar? 1 - Sim, 0 - Não\n");
  scanf("%d", &op);

  while (op == 1)
  {
    printf("Digite a senha jogador número 1; \n");
    scanf("%d", &jogador1);

    for (contador = 1; contador <= chances; contador++)
    {
      printf("é sua chance %d jogador2: \n", contador);
      scanf("%d", &jogador2);
      if (jogador2 == jogador1 - 1 || jogador2 == jogador1 + 1)
      {
        printf("Quente!!\n");
      }
      else if (jogador2 > jogador1)
      {
        printf("Maior!! \n");
      }
      else if (jogador2 < jogador1)
      {
        printf("Menor!! \n");
      }
      else if (jogador2 == jogador1)
      {
        printf("PARABÉNS VOCÊ QUEBROU A SENHA!! \n");
        break;
      }
      if (contador > 6)
      {
        printf("fim da partida e senha não quebrada ;( \n");
        break;
      }
    }

    if (contador > 6)
    {
      printf("fim da partida e senha não quebrada ;( \n");
    }

    printf("Deseja jogar novamente? 1 - Sim, 0 - Não\n");
    scanf("%d", &op);
  }
  return 0;
}