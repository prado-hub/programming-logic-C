#include <stdio.h>

int main()
{
  char *meses[] = {
      "",
      "January",
      "February",
      "March",
      "April",
      "May",
      "June",
      "July",
      "August",
      "September",
      "October",
      "November",
      "December"};

  int N;
  scanf("%d", &N);

  printf("%s \n", meses[N]);

  return 0;
}