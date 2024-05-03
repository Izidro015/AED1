#include <stdio.h>
#include <stdlib.h>

/*c) Utilize a fun��o troca (swap) apresentada no slide te�rico da disciplina em uma outra fun��o que recebe como
par�metro um vetor e seu tamanho, e inverte os valores desse vetor. Assim, caso o vetor informado contenha os valores
1,3,6,5,8, o resultado 8,5,6,3,1.*/

void swap(int *a, int *b){
    int temp;
    temp = *b;
    *b = *a;
����*a�=�temp;
}
void invertvetor(int *vet, int tamanho){
    for (int i=0;i<tamanho/2;i++){
        swap(&vet[i], &vet[tamanho-1-i]);
    }
}

int main(){
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int *vet=(int *)malloc(tamanho*sizeof(int));
    printf("Digite os elementos do vetor:\n");
    for (int i=0;i<tamanho;i++){
        scanf("%d", &vet[i]);
    }
    printf("Vetor antes da invers�o: ");
    for (int i=0;i<tamanho;i++) {
        printf("%d ", vet[i]);
    }
    invertvetor(vet, tamanho);
    printf("\nVetor ap�s a invers�o: ");
    for (int i=0;i<tamanho;i++){
        printf("%d ", vet[i]);
    }
    free(vet);
    return 0;
}
