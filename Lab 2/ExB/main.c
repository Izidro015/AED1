#include <stdio.h>
#include <stdlib.h>

/*b) Crie um programa que:
o Aloque dinamicamente um vetor de 5 n�meros inteiros,
o Pe�a para o usu�rio digitar os 5 n�meros no espa�o alocado,
o Mostre na tela os 5 n�meros,
o Libere a memoria alocada.*/

int main()
{
    int i, *p;
    p=(int *) malloc(5*sizeof(int));
    for(i=0;i<5;i++){
        printf("Digite um numero: ");
        scanf("%d", (p+i));
    }
    for(i=0;i<5;i++){
        printf("\n%d", (*p+i));
    }
    free (p);
    return 0;
}
