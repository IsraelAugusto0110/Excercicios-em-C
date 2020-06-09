#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main(){
    float soma = 0;
    int i = 1, x, k, a, b = 1;

    printf("X: ");
    scanf("%d", &x);
    printf("K: ");
    scanf("%d", &k);

    a = x;

    do{
        soma = soma + (a/b);
        a *= (-pow(x, 2));
        b += 2;
        i++;
    }while(i <= k);
    printf("Soma = %.1f", soma);
}
