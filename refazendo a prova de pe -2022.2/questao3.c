#include <stdio.h>

int main()
{
  int candidato, idade;
  char resposta;                                    // variaveis de entrada
  int totalSemExperiencia = 0, idadeMaisNovo = 100; // contador e armazenador

  while (candidato != 0)
  {
    printf("numero do candidato e idade\n");
    scanf("%d %d", &candidato, &idade);
    if (candidato == 0)
    {
      break;
    }
    do
    {
      scanf(" %c", &resposta);
      if (resposta != 's' || resposta != 's')
      {
        printf("resposta invalida\n");
      }
    } while (resposta != 's' || resposta != 's');

    if (idade > 30)
    {
      if (resposta == 'n')
      {
        totalSemExperiencia++;
      }
    }

    if (idade < idadeMaisNovo)
    {
      idadeMaisNovo = idade;
    }
  }

  printf("%d\n", totalSemExperiencia); // total sem experiencia
  printf("%d\n", idadeMaisNovo);       // idade do entrevistado mais novo
  return 0;
}