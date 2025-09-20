#include <stdio.h>

int main(){

    int distancia,tempo;
    scanf("%d",&distancia);

    double velocidadeRelativa = 90 - 60;

    tempo = (distancia / velocidadeRelativa) * 60;

    printf("%d minutos", tempo);
    return 0;
}