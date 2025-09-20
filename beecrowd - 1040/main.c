#include <stdio.h>

int main()
{
  double n1, n2, n3, n4, media, exame;
  scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
  media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;

  if (media >= 7)
  {
    printf("Media: %.1lf\n", media);
    printf("Aluno aprovado.\n");
  }

  if (media < 5)
  {
    printf("Media: %.1lf\n", media);
    printf("Aluno reprovado.\n");
  }

  if (media >= 5 && media <= 6.9)
  {
    printf("Media: %.1lf\n", media);
    printf("Aluno em exame.\n");
    scanf("%lf", &exame);
    printf("Nota do exame: %.1lf\n", exame);
    media = (media + exame) / 2.0;
    if (media >= 5)
    {
      printf("Aluno aprovado.\n");
    }
    else
    {
      printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n", media);
  }

  return 0;
}