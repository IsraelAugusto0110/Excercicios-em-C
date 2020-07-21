#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 16

void main(){
    float M[12][12], soma = 0, media;
    int i, j, L, C;
    char T;

    scanf("%d\n%c", &C, &T);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            //printf("linha %d coluna %d: ", i, j);
            scanf("%f", &M[i][j]);
        }
    }

    for(i = 0; i < 12; i++){
        soma+= M[i][C];
    }
    media = soma/12;

    if(T == 'S'){
        printf("%.1f\n", soma);
    }
    if(T == 'M'){
        printf("%.1f\n", media);
    }
}
