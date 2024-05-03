#include <stdio.h>
#include <stdlib.h>

/*d) Escreva um programa em C que crie um vetor de n n�meros inteiros
(n informado pelo usu�rio). Fa�a a leitura dos elementos desse vetor. Depois,
exclua os elementos �mpares desse vetor, e redimensione-o, utilizando aloca��o
din�mica de mem�ria, para que n�o haja buracos no resultado final*/

int main() {
    int n;
    int *vetor = (int *)malloc(n * sizeof(int));
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    if (vetor==NULL){
        printf("Erro na aloca��o de mem�ria.\n");
        return 1;
    }
    printf("Digite os elementos do vetor:\n");
    for (int i=0;i<n;i++) {
        scanf("%d",&vetor[i]);
    }
    int elementosPares=0;// Exclui os impares
    for (int i=0;i<n;i++) {
        if (vetor[i]%2==0) {
            elementosPares++;
        }
    }
    int *vetorRed = (int *)malloc(elementosPares * sizeof(int));
    if (vetorRed==NULL) {
        printf("Erro na aloca��o de mem�ria.\n");
        free(vetor);
        return 1;
    }
    int idx=0;
    for (int i=0;i<n;i++) {
        if (vetor[i]%2==0) {
            vetorRed[idx]=vetor[i];
            idx++;
        }
    }
    free(vetor);
    printf("Vetor resultante:\n");
    for (int i=0;i<elementosPares;i++) {
        printf("%d ",vetorRed[i]);
    }
    printf("\n");
    free(vetorRed);// Liberando mem�ria do vetor redimensionado
    return 0;
}
