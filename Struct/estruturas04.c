#include<stdio.h>
#include<stdlib.h>
#define MAX 50

typedef struct{
    char titulo[MAX];
    char genero[MAX];
    char isbn[MAX];
    float preco;
}livro;

typedef struct{
    char nome[MAX];
    livro livros[2];
}leitor;

leitor leitores[2];

void main(){
    int i, j;
    for(i = 0; i < 2; i++){
        printf("Nome: ");
        fflush(stdin);
        gets(leitores[i].nome);

        for(j = 0; j < 2; j++){
            printf("Livro: ");
            fflush(stdin);
            gets(leitores[i].livros[j].titulo);

            printf("Genero: ");
            fflush(stdin);
            gets(leitores[i].livros[j].genero);

            printf("ISBN: ");
            fflush(stdin);
            gets(leitores[i].livros[j].isbn);

            printf("Preco: ");
            scanf("%f", &leitores[i].livros[j].preco);

            printf(" ");
        }
    }
}
