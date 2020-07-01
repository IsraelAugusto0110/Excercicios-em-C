#include<stdio.h>
#include<stdlib.h>
#define MAX 50

typedef struct{
    char pais[MAX];
    char cidade[MAX];
}tp_endereco;

typedef struct{
    char nome[MAX];
    int idade;

    tp_endereco endereco;
}cadastro_pessoa;

cadastro_pessoa pessoa[2];

void main(){
    int i;
    for(i = 0; i < 2; i++){
        printf("Nome: ");
        fflush(stdin);
        gets(pessoa[i].nome);

        printf("Idade: ");
        scanf("%d", &pessoa[i].idade);

        printf("Pais: ");
        fflush(stdin);
        gets(pessoa[i].endereco.pais);

        printf("Cidade: ");
        fflush(stdin);
        gets(pessoa[i].endereco.cidade);
    }
}
