#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 3

void main(){
    float M[MAX][MAX], soma = 0, media;
    int i, j, contador = 0;
    char O;

    scanf("%c", &O);

    for(i = 0; i < MAX; i++){
        for(j = 0; j < MAX; j++){
            printf("linha %d coluna %d: ", i, j);
            scanf("%f", &M[i][j]);
            if(j < i){
                soma += M[i][j];
                contador += 1;
            }
        }
    }

    media = soma/contador;

    if(O == 'S'){
        printf("%.1f\n", soma);
    }
    if(O == 'M'){
        printf("%.1f\n", media);
    }
}
