#include <stdio.h>
#include <stdlib.h>

/*a) Fa�a uma fun��o que receba um vetor de n�meros inteiros como par�metro, e devolve:
o a m�dia dos valores do vetor;
o o maior valor do vetor.
Esses valores devem ser retornados utilizando passagem de par�metros por refer�ncia.*/

void func(int *vet, float *media, int *maior, int tamanho){
    *media=0;
    *maior=0;
    for(int i=0; i<tamanho; i++){
        *media+=vet[i];
        if(vet[i]>*maior){
            *maior=vet[i];
        }
    }
    *media/=tamanho;

}

int main(){
    int *vet, maior, tamanho;
    float media;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vet=(int *)malloc(tamanho*sizeof(int));
    for(int i=0;i<tamanho;i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }
    func(vet,&media,&maior,tamanho);
    printf("O maior numero: %d\n", maior);
    printf("A media: %0.2f\n", media);
    free(vet);
    return 0;
}
