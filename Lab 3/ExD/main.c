#include <stdio.h>

/*d) Construa uma fun��o que receba dois valores inteiros a e b, e retorne o quociente e o resto da divis�o de a por b. Utilize
passagem de par�metro por refer�ncia para retornar os resultados. A fun��o deve retornar -1 caso n�o seja poss�vel
realizar as opera��es e 0 caso seja poss�vel. Crie um programa que utilize a fun��o criada, tratando o retorno da fun��o.*/

int dividir(int a, int b, int *quociente, int *resto) {
    if(b == 0){
        return -1;
    }
    *quociente=a/b;
    *resto=a%b;
    return 0;
}

int main() {
    int a, b, quociente, resto;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    int resultado=dividir(a, b, &quociente, &resto);
    if (resultado==0){
        printf("Quociente: %d\n", quociente);
        printf("Resto: %d\n", resto);
    } else{
        printf("N�o � poss�vel realizar as opera��es.\n");
    }
    return 0;
}
