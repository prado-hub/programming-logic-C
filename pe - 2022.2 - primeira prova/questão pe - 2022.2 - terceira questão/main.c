#include <stdio.h>

int main()
{
  int candidato = 1, idade, sumTotalSemXp = 0, novoExperiencia = 100;
  char resposta;

  while (candidato != 0)
  {
    printf("digite o numero do candidato\n");
    scanf("%d", &candidato);
    if (candidato == 0)
    {
      break;
    }

    printf("digite a idade do candidato\n");
    scanf("%d", &idade);
    do
    {
      printf("possui experiência profissional? s - sim, n - não\n");
      scanf(" %c", &resposta);
    } while (resposta != 's' && resposta != 'n');

    if (resposta == 'n' && idade > 30)
    {
      sumTotalSemXp++;
    }
    if (resposta == 's' && idade <= novoExperiencia)
    {
      novoExperiencia = idade;
    }
  }
  printf("total de candidatos sem experiência acima de 30 anos: %d\n", sumTotalSemXp);
  printf("idade do candidato mais novo e com experiência: %d", novoExperiencia);
  return 0;
}