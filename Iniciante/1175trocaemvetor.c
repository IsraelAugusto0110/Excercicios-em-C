#include<stdio.h>

void main(){
    int N[20], aux = 0;

    int i = 0, j = (sizeof(N)/4 - 1), k = 0;

    while(k <= j){
        scanf("%d", &N[k]);
        k++;
    }

    while(i < j){
        aux = N[i];
        N[i] = N[j];
        N[j] = aux;
        i++;
        j--;
    }
    i = 0;
    while(i < sizeof(N)/4){
        printf("N[%d] = %d\n", i, N[i]);
        i++;
    }
}
