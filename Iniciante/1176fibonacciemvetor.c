#include<stdio.h>

void main(){
    int x[10], n, i, f, a= 0, b = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &f);
        x[i] = f;
        int j, soma = 0;
        for(j = 1; j < f; j++){
            soma = a + b;
            a = b;
            b = soma;
        }
        printf("Fib(%d) = %d\n", x[i], soma);
        soma = 0;
    }
}
