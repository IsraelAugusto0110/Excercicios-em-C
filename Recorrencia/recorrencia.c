#include <stdio.h>
#include <stdlib.h>

void main(){
    float soma = 0;
    int i = 1, x, k, a, b;

    printf("X: ");
    scanf("%d", &x);
    printf("K: ");
    scanf("%d", &k);

    a = x;
    b = k;

    do{
        soma = soma + (a/b);
        a *= x;
        b = b - 1;
        i++;
    }while(i<= k);
    printf("Soma = %.1f", soma);
}
