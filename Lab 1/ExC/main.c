#include <stdio.h>

/*c) Escreva um programa que recebe um operador aritm�tico e dois operandos e calcule a opera��o indicada. As
opera��es poss�veis s�o soma(+), subtra��o(-), multiplica��o(*) e divis�o(/).*/

int main(){
    float x,y;
    int opcao;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("Digite outro numero: ");
    scanf("%f", &y);
    printf("Selecione uma das opcoes:\n1)Soma\n2)Subtracao\n3)Multiplicacao\n4)Divisao\n");
    scanf("%d", &opcao);
    float resultado;
    if(opcao<0||opcao>=5){
        printf("Opcao invalida");
        return 0;
    }else{
        switch(opcao){
            case 1:printf("A soma eh: %0.2f\n", resultado=x+y);break;
            case 2:printf("A subtracao eh: %0.2f\n", resultado=x-y);break;
            case 3:printf("A multiplicacao eh: %0.2f\n", resultado=x*y);break;
            case 4:if(y!=0){
                printf("A divisao eh: %0.2f\n", resultado=x/y);break;
            }else{
                printf("Numero invalido");break;
            }
        }
    }
    return 0;
}
