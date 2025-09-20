#include <stdio.h>
 
int main() {
    int N,anos,meses,dias;
    scanf("%d",&N);

    anos = N/365;
    N %= 365;
    meses = N/30;
    N %= 30;
    dias = N;

    printf("%d anos(s)\n",anos);
    printf("%d mes(es)\n",meses);
    printf("%d dia(s)\n",dias);

    
    return 0;
}