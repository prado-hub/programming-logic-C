#include <stdio.h>

int main()
{
  int idade, curso, motivo;
  int sumAdm = 0, OlderDireito = 0;
  double sumIdade = 0;
  int aptCc = 0, aptAdm = 0, aptDireto = 0;

  for (int i = 0; i < 200; i++)
  {
    printf("idade: \n");
    scanf("%d", &idade);
    sumIdade += idade;

    printf("1 - administração, 2 - Ciência da Computação, 3 - Direito\n");
    scanf("%d", &curso);
    if (curso == 1 && idade < 20)
    {
      sumAdm++;
    }
    if (curso == 3)
    {
      if (idade > OlderDireito)
      {
        OlderDireito = idade;
      }
    }

    printf("1 - remuneração obtida, 2 - aptidão, 3 - outro \n");
    scanf("%d", &motivo);
    if (motivo == 2)
    {
      if (curso == 1)
      {
        aptAdm++;
      }
      else
      {
        if (curso == 2)
        {
          aptCc++;
        }
        if (curso == 3)
        {
          aptDireto++;
        }
      }
    }
  }
  sumIdade = sumIdade / 200.0;

  printf("Quantidade de alunos de ADM com a idade inferior a 20: %d\n", sumAdm);
  printf("Idade média dos entrevistados: %lf\n", sumIdade);
  printf("Idade do entrevistado mais velho de Direito: %d\n", OlderDireito);

  // colocar casos onde os cursos tem a mesma quantidade de alunos que escolheram por aptidão
  if ((aptAdm > aptCc) && (aptAdm > aptDireto))
  {
    printf("o curso mais frequentado por quem tem aptidão pelo curso escolhido foi Administração\n");
  }
  else if ((aptDireto > aptCc) && (aptDireto > aptAdm))
  {
    printf("o curso mais frequentado por quem tem aptidão pelo curso escolhido foi Direito\n");
  }
  else
  {
    printf("o curso mais frequentado por quem tem aptidão pelo curso escolhido foi Ciência da Computação\n");
  }
  return 0;
}