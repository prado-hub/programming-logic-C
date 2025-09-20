#include <stdio.h>

int main(){
    int tempo,velocidadeMedia;
    double combustivel,distancia;

    scanf("%d %d",&tempo,&velocidadeMedia);

    distancia = velocidadeMedia * tempo;

    combustivel = distancia / 12.0;

    printf("%.3lf\n", combustivel);
    return 0;
}