#include <stdio.h>

int main(){
    int x[5];
    int cont;

    for (size_t i = 0; i < 5; i++){
        scanf("%d",&x[i]);

        if (x[i] % 2 == 0){
            cont++;
        }
    }
    
    printf("%d valores pares\n",cont);
    return 0;
}