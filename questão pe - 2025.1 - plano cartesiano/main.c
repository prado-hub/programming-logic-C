#include <stdio.h>
#include <math.h>
//declarando a função como global recebendo os paramêtros:
double distancia(double x1,double y1,double x2, double y2);

void main(){

double x1,y1,x2,y2;

printf("digite a primeira coordernada\n");
scanf("%lf %lf",&x1,&y1);

printf("digite a segunda coordernada\n");
scanf("%lf %lf", &x2, &y2);

//passando os paramêtros
double distanciaResult = distancia(x1,y1,x2,y2);

printf("a distancia entre essas coordenadas são %.2lf", distanciaResult);

}

double distancia(double x1,double y1,double x2,double y2){
//funçoes de potência e raiz quadrada.
double dist1 = pow((x1-x2),2);
double dist2 = pow((y1-y2),2);
double soma = dist1 + dist2;
//função para calcular a raiz quadrada da distância
double distancia = sqrt(soma);
return distancia;
}

