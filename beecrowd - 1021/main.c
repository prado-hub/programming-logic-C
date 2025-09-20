#include <stdio.h>
#include <math.h> 

int main(){
    //uso do round para converter para o inteiro mais próximo
    double N;
    int valor;
    scanf("%lf",&N);
    
    valor = (int) round(N * 100);

    int n100 = valor / 10000;
    valor = valor % 10000;
    
    int n50 = valor / 5000;
    valor = valor % 5000;
    
    int n20 = valor / 2000;
    valor = valor % 2000;
    
    int n10 = valor / 1000;
    valor = valor % 1000;
    
    int n5 = valor / 500;
    valor = valor % 500;
    
    int n2 = valor / 200;
    valor = valor % 200;

    //moedas
    int m1 = valor / 100;
    valor = valor % 100;
    
    int m05 = valor / 50;
    valor = valor % 50;
    
    int m025 = valor / 25;
    valor = valor % 25;
    
    int m01 = valor / 10;
    valor = valor % 10;
    
    int m005 = valor / 5;
    valor = valor % 5;
    
    int m001 = valor;
  

    

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n",n100);
  printf("%d nota(s) de R$ 50.00\n",n50);
  printf("%d nota(s) de R$ 20.00\n",n20);
  printf("%d nota(s) de R$ 10.00\n",n10);
  printf("%d nota(s) de R$ 5.00\n",n5);
  printf("%d nota(s) de R$ 2.00\n",n2);
  
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n",m1);
  printf("%d moeda(s) de R$ 0.50\n",m05);
  printf("%d moeda(s) de R$ 0.25\n",m025);
  printf("%d moeda(s) de R$ 0.10\n",m01);
  printf("%d moeda(s) de R$ 0.05\n",m005);
  printf("%d moeda(s) de R$ 0.01\n",m001);

  return 0;
}