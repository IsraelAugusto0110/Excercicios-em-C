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
        a = (-pow(x, 2)) * a;
        b = (i+2) * (i+1) * i * b;
        i = i + 2;
    }while(i <= k);
    printf("Cos(%d) = %.1f", x, soma);
}
