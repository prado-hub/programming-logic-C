#include <stdio.h>

int main(){
    int numeros[101];
    double produtosImpar = 1;
    int somaPares = 0;

    for (size_t i = 1; i < 101; i++){
        numeros[i] = i;
         if (numeros[i] % 2 == 0)
        {
            somaPares = somaPares + numeros[i];
            
        }else if (numeros[i] % 2 != 0) //lembre-se que pode ser negativo
        {
            produtosImpar = produtosImpar * numeros[i];
        }  
    }
    
    printf("a soma dos números pares é %d\n", somaPares);
    printf("o produto dos números impares é %lf", produtosImpar);
    
    return 0;
}