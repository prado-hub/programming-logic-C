#include <stdio.h>

int main(){
    int N;
    int minutos,horas,segundos,restoHoras;

    scanf("%d",&N);

    horas = N/3600;

    minutos = N % 3600;
    minutos = minutos/60;
    

    segundos = N % 60;

    printf("%d:%d:%d",horas,minutos,segundos);

    return 0;
}