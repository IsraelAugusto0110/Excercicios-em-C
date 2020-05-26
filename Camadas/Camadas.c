#include<stdio.h>
void main(){
    int n, i, j;
    printf("Quantas camadas? ");
    scanf("%d", &n);

    char l = 'A';
    char vetor[n][n];

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            vetor[i][j] = l;
            if(i == 1 && j == 0){
                l++;
            }else if(i == n || j == n){
                l--;
            }
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%c ", vetor[i][j]);
        }
        printf("\n");
    }
}
