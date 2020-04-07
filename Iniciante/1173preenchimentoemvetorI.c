#include<stdio.h>

void main(){
    int x[10], n, i = 0;

    scanf("%d", &n);
    x[i] = n;
    printf("N[%d] = %d\n", i, x[i]);

    for(i = 1; i <= 9; i++){
        n *= 2;
        x[i] = n;
        printf("N[%d] = %d\n", i, x[i]);
    }
}
