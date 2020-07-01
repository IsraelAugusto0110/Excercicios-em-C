#include<stdio.h>
#include<string.h>
#define MAX 6
typedef struct{
    char nome[25];
    char classe;
    int subclasse;
    float dist;
}estrela;

void imprime(estrela e){
    printf("Nome: %s\nClasse: %c%d\nDistancia: %.2f anos luz\n",
           e.nome, e.classe, e.subclasse, e.dist);
}

void main(){
    estrela Q;
    strcpy(Q.nome, "Sirius A");
    Q.classe = 'A';
    Q.subclasse = 1;
    Q.dist = 8.60;

    imprime(Q);
}
