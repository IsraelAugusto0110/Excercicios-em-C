#include<stdio.h>
#define MAX 16

void main(){
    int par[MAX], impar[MAX], x, i, p = 0, j = 0, k;

    for(i = 0; i < 15; i++){
        scanf("%d", &x);
        if(x%2 == 0){
            par[p] = x;
            p++;
        }else{
            impar[j] = x;
            j++;
        }

        if(p == 5){
            for(k = 0; k < 5; k++){
                printf("Par[%d] = %d\n", k, par[k]);
            }
            p = 0;
        }
        if(j == 5){
            for(k = 0; k < 5; k++){
                printf("Impar[%d] = %d\n", k, impar[k]);
            }
            j = 0;
        }
    }

    for(i = 0; i < j; i++){
        printf("Impar[%d] = %d\n", i, impar[i]);
    }

    for(i = 0; i < p; i++){
        printf("Par[%d] = %d\n", i, par[i]);
    }
}
