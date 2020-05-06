# include <stdio.h>

void main() {
    /**Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
    elementos. Escreva ao final a matriz obtida**/

    int n[5][5], i, j, c = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(j == c){
                n[i][j] = 1;
            }else{
                n[i][j] = 0;
            }
        }
        c++;
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
}
