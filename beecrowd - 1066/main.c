#include <stdio.h>

int main()
{
  int n[5];
  int Even = 0;
  int Odd = 0;
  int Positive = 0;
  int Negative = 0;

  for (size_t i = 0; i < 5; i++)
  {
    scanf("%d", &n[i]);
    if (n[i] % 2 == 0)
    {
      Even++;
    }
    else
    {
      Odd++;
    }
    if (n[i] > 0)
    {
      Positive++;
    }
    else if (n[i] < 0)
    {
      Negative++;
    }
  }
  printf("%d valor(es) par(es)\n", Even);
  printf("%d valor(es) impar(es)\n", Odd);
  printf("%d valor(es) positivo(s)\n", Positive);
  printf("%d valor(es) negativo(s)\n", Negative);
  return 0;
}