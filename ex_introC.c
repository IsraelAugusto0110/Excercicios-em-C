#include<stdio.h>

int main(){
    /**1. Dada uma seqüência de números inteiros não-nulos, seguida por 0,
    imprimir seus quadrados.*/
    int numero, quad;
    printf("numero: ");
    scanf("%d", &numero);
    while(numero >= 0){
        quad = numero * numero;
        printf("O quadrado de %d e %d\n", numero, quad);
        numero --;
    }

    /**2. Dado um número inteiro positivo n, calcular a soma dos n primeiros
    números naturais.*/
    int n, soma, c;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
            printf("%d\n", i);
            soma = n + i;
            c = soma;
    }printf("%d\n", c);

    return 0;

}
