#include <stdio.h>

int main()
{
  int x;

  do
  {
    scanf("%d", &x);
    if (x != 0)
    {
      for (size_t i = 1; i < x; i++)
      {
        printf("%d ", i);
      }
      printf("%d", x);
      printf("\n");
    }
    else
    {
      break;
    }
  } while (x != 0);

  return 0;
}