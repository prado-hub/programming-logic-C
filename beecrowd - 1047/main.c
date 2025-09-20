#include <stdio.h>

int main(){
    int h1,h2,m1,m2,inicio,final,duracao,minutos;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

    inicio = (h1 * 60) + m1;
    final = (h2 * 60) + m2;
    
    if(inicio==final){
        duracao = 24;
        minutos = 0;
    }else if (inicio<final){
        duracao = (final - inicio)/ 60;
        minutos = (final - inicio) % 60;
    }else if (inicio>final){
        duracao = (24 * 60) - inicio + final;
        minutos = duracao % 60;
        duracao = duracao / 60;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",duracao,minutos);
    return 0;
}