#include<stdio.h>
#define MAX 6

typedef struct{
    int horas, minutos;
}hm;

void calcula(int T);

int T;

void main(){
    printf("Quantidade de minutos: ");
    scanf("%d", &T);

    calcula(T);
}

void calcula(int T){
    hm tempo;

    tempo.horas = T/60;
    tempo.minutos = T%60;

    printf("%d H %d min\n\n", tempo.horas, tempo.minutos);
}
