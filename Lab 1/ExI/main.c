#include <stdio.h>
#define MAX_LIVROS 5

/*i) Fa�a um programa que cria uma estrutura livro, que cont�m os elementos t�tulo, ano de edi��o, n�mero de p�ginas
e pre�o. Criar uma vari�vel dessa estrutura que � um vetor de 5 elementos. Ler os valores para a estrutura e
imprimir a m�dia do n�mero de p�ginas do livros*/

struct Livro {
    char titulo[100];
    int ano_edicao;
    int num_paginas;
    float preco;
};

int main() {
    struct Livro livros[MAX_LIVROS];
    int total_paginas = 0;
    printf("Digite os dados dos %d livros:\n", MAX_LIVROS);
    for(int i=0;i<MAX_LIVROS;i++){// Le os valores para a estrutura livro.
        printf("Livro %d:\n", i + 1);
        printf("T�tulo: ");
        fgets(livros[i].titulo, sizeof(livros[i].titulo), stdin);
        printf("Ano de edi��o: ");
        scanf("%d", &livros[i].ano_edicao);
        printf("N�mero de p�ginas: ");
        scanf("%d", &livros[i].num_paginas);
        printf("Pre�o: ");
        scanf("%f", &livros[i].preco);
        while (getchar() != '\n');
    }

    for(int i=0;i<MAX_LIVROS;i++){// Calcula a m�dia do n�mero de p�ginas dos livros
        total_paginas += livros[i].num_paginas;
    }
    float media_paginas = (float)total_paginas / MAX_LIVROS;
    printf("A m�dia do n�mero de p�ginas dos livros �: %.2f\n", media_paginas);
    return 0;
}
