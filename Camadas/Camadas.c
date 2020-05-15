#include<stdio.h>

void main(){
    int n;
    printf("Quantas camadas? ");
    scanf("%d", &n);

    int layers = (2*n) + 1; // notei que a quantidade de camadas � 2 * N + 1;
                            //por exemplo n = 3 temos 7 linhas e 7 colunas

    char vetor[layers][layers];
    int i, j;

    /*por enquanto este loop serve para preencher apenas com 'A'
      uma matriz com 2*n + 1 colunas e 2*n + linhas*/
    for(i = 0; i < layers; i++){
        for(j = 0; j < layers; j++){
            vetor[i][j] = 'A';
            if(i == n && j == n){
                /*apos n linhas e n colunas desenha o '*'*/
                printf("* ");
            }else{
                printf("%c ", vetor[i][j]);
            }
        }
        printf("\n");
    }
}
