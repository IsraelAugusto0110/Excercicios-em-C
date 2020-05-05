# include <stdio.h>

void main() {
    /*Leia um vetor de 8 posições e troque os 4 primeiros valores pelos 4 últimos e vice e
      versa. Escreva ao final o vetor obtido*/

    int vetor[8], ultimos[4], primeiros[4], x, i;

    for(i = 0; i < 8; i++){
        /*criamos o primeiro vetor*/
        printf("Insira um numero: ");
        scanf("%d", &x);
        vetor[i] = x;
    }

    for(i = 1; i <= 4; i++){
       /*colocamos os valores em vetores temporarios*/
       ultimos[i - 1] = vetor[8 - i];
       primeiros[i - 1] = vetor[i - 1];
    }

    printf("Invertendo a sequencia: ");

    for(i = 0; i < 4; i++){
        printf("%d ", ultimos[i]);
    }

    for(i = 0; i < 4; i++){
        printf("%d ", primeiros[i]);
    }
}
