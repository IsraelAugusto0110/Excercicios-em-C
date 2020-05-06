# include <stdio.h>

void main() {
    /**7. Leia uma matriz 10 x 10 e escreva a localização
     (linha e a coluna) do maior valor.**/

    int n[10][10],i, j, x, maior = 0, posicao[2];

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("Linha [%d] coluna[%d]: ", i, j);
            scanf("%d", &x);
            n[i][j] = x;
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(n[i][j] >= maior){
                maior = n[i][j];
                posicao[0] = i;
                posicao[1] = j;
            }
        }
    }

    printf("O maior valor encontrado foi %d.\n", maior);
    printf("Na linha %d e coluna %d.\n", posicao[0], posicao[1]);
}
