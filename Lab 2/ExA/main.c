#include <stdio.h>
#include <stdlib.h>

/*a) Utilizando aritm�tica de ponteiros, mostre na tela o conte�do da string char
nome[] = �Carla Faria�. Utilize o printf com %c e n�o %s. Exiba tamb�m o
conte�do de um vetor de double de 10 posi��es usando o nome do vetor com o
ponteiro para acessar as posi��es.*/

int main(){
    char nome[]="Carla Faria";
    char *p;
    p=nome;
    for(int i=0;*(p+i)!='\0';i++){
        printf("%c",*(p+i));
    }
    double vet[10]={0,1,2,3,4,5,6,7,8,9};
    for(int j=0;j<10;j++){
        printf("\n%lf",*vet+j);
    }
    return 0;
}
