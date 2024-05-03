#include <stdio.h>
#include <stdlib.h>

/*c) Fa�a uma fun��o para aproximar a fun��o exponencial pela s�rie de Taylor
(DICA: utilize a fun��o de exponencia��o criada no exerc�cio b)*/


double calcTaylor(double x, int n){
    double result=1.0;//o primeiro termo da s�rie � sempre 1
    double termo=1.0;
    for(int i=1;i<=n;i++){
        termo*=x/i;//calcula o pr�ximo termo usando o anterior
        result+=termo;
    }
    return result;
}

int main() {
    double x;
    int n;
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    printf("Digite o numero de termos na serie (n): ");
    scanf("%d", &n);
    double expAprox = calcTaylor(x, n);
    double expReal = exp(x);
    printf("Exponencial aproximada: %0.8lf\n", expAprox);
    printf("Exponencial real: %0.8lf\n", expReal);
    return 0;
}
