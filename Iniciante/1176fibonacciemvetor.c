#include<stdio.h>
#define MAX 70

void main(){
    int T, N, i;
    unsigned long long int Fibonnacci[MAX];
    int vetor[MAX];

    for(i = 0; i <= 60; i++){
        if(i <= 1){
            Fibonnacci[i] = i;
        }else{
            Fibonnacci[i] = Fibonnacci[i-2] + Fibonnacci[i-1];
        }
    }
    scanf("%d", &T);

    for(i = 0; i < T; i++){
        scanf("%d", &N);
        vetor[i] = N;
    }

    for(i = 0; i < T; i++){
        printf("Fib(%d) = %lld\n", vetor[i], Fibonnacci[vetor[i]]);
    }
}
