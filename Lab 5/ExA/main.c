#include <stdio.h>
#include <stdlib.h>

/*a) Escreva uma fun��o que receba como par�metro uma data (crie um struct com
informa��es referentes a dia, m�s e ano), e mostre na tela a data no formato dd/mm/aaaa.*/

struct data{
    int dia, mes, ano;
};
void func(int a, int b, int c){
    printf("%d/%d/%d", a,b,c);
}

int main(){
    struct data c;
    printf("Digite o dia: ");
    scanf("%d", &c.dia);
    printf("Digite o mes: ");
    scanf("%d", &c.mes);
    printf("Digite o ano: ");
    scanf("%d", &c.ano);
    func(c.dia,c.mes,c.ano);
    return 0;
}
