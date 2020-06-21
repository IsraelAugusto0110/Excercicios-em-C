#include<stdio.h>
#define MAX 16

void main(){
    int N, menor = 1000, p, i;
    scanf("%d", &N);

    int X[N];

    for(i = 0; i < N; i++){
        scanf("%d", &X[i]);
        if(X[i] < menor){
            p = i;
            menor = X[i];
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", p);
}
