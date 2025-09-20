#include <stdio.h>

int main(){
    int apples;
    double total;
   // double preco1 = 2.30;
   // double preco2 = 2.30;
    
    printf("digite abaixo quantas maças deseja comprar");

    scanf("%d", &apples);

    if(apples<12){
        total = apples * 2.30;
        printf("o valor total das maças é %.2lf", total);
    }else{
        total = apples * 2.00;
        printf("o valor total das maças é %.2lf", total);
    }

}