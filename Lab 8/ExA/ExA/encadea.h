#ifndef ENCADEA_H_INCLUDED
#define ENCADEA_H_INCLUDED

#define MAX 100

typedef struct aluno{
    int mat;
    char nome[30];
    float n1;

}Aluno;

typedef struct lista Lista;

typedef struct no No;

Lista *criar();
void limpar(Lista *l);
int inserirInicio(Lista *l,Aluno it);
int inserirFim(Lista *l,Aluno it);
int inserirPosicao(Lista *l,Aluno it,int pos);

int removerInicio(Lista *l);
int removerFim(Lista *l);
int removerPosicao(Lista *l,int pos);
int removerItem(Lista *l,Aluno it);

int buscarItemChave(Lista *l,int chave,struct aluno *retorno);
int buscarPosicao(Lista *l,int posicao,Aluno *retorno);

int listaVazia(Lista *l);
int listaCheia(Lista *l);
int tamanho(Lista *l);
void mostrar(Lista *l);


#endif // ENCADEA_H_INCLUDED
