#include <stdio.h>
 
int main() {
 
    double salario, novoSalario, reajuste;
    scanf("%lf", &salario);
    
    if(salario <= 400){
        reajuste = salario * 15 / 100;
        novoSalario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novoSalario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 15 %%\n");
    } else if(salario <= 800){
        reajuste = salario * 12 / 100;
        novoSalario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novoSalario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 12 %%\n");
    } else if(salario <= 1200){
        reajuste = salario * 10 / 100;
        novoSalario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novoSalario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 10 %%\n");
    } else if(salario <= 2000){
        reajuste = salario * 7 / 100;
        novoSalario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novoSalario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 7 %%\n");
    } else {
        reajuste = salario * 4 / 100;
        novoSalario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novoSalario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
