#include <stdio.h>

int main(){
    int num, somaPares = 0;
    double produtosImpar = 1;

    for (size_t i = 1; i <= 100; i++) {
      
        scanf("%d", &num);
           if (num % 2 == 0)
        {
            somaPares = somaPares + num;
        }else if (num % 2 != 0) //lembre-se que pode ser negativo
        {
            produtosImpar = produtosImpar * num;
        }  
    }

    printf("a soma dos números pares é %d\n", somaPares);
    printf("o produto dos números impares é %lf", produtosImpar);

    return 0;
    
}