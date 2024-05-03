#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*h) Crie um programa que receba uma string do usu�rio, e mostre se existem letras repetidas, e quais s�o elas*/

int main() {
    char str[100];
    int contador[256]={0}; // Inicializa com zero para todos os caracteres ASCII poss�veis.
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';// Remove o caractere '\n' do final da string.
    int len = strlen(str);
    bool tem_repeticao = false;
    for(int i=0;i<len;i++) {
        char c=str[i];
        if((c<'A'||(c>'Z' && c<'a') || c>'z')) {// Ignora caracteres n�o alfab�ticos.
            continue;
        }
        if(c>='A' && c<='Z'){// Converte os caracteres mai�sculos para min�sculos.
            c += 32;
        }
        contador[c]++;
        if(contador[c]>1){
            tem_repeticao = true;
        }
    }
    if(tem_repeticao){
        printf("Existem letras repetidas na string:\n");
        for(int i=0;i<256;i++){
            if(contador[i]>1){
                printf("%c ", (char)i);
            }
        }
        printf("\n");
    }else{
        printf("N�o existem letras repetidas na string.\n");
    }
    return 0;
}
