#include<stdio.h>
void main(){
    int n, i, j;
    printf("Quantas camadas? ");
    scanf("%d", &n);

    char l = 'A';
    char vetor[n][n];

    for(i = 0; i < 2*n + 1; i++){
        for(j = 0; j < 2*n + 1; j++){
            if(i == n && j == n){
                vetor[i][j] = '*';
            }else{
                vetor[i][j] = l;
            }
            printf("%c ", vetor[i][j]);
        }
        printf("\n");
    }
}
