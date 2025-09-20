#include <stdio.h>

int main(){
    double x[6],media;
    double sum = 0;
    int cont = 0;

    for (size_t i = 0; i < 6; i++){
        scanf("%lf",&x[i]);
        
        if (x[i] > 0){
            sum = sum + x[i];
            cont++;
        }
    }

    media = sum / cont;
    
    printf("%d valores positivos\n",cont);
    printf("%.1lf\n",media);
    return 0;
}