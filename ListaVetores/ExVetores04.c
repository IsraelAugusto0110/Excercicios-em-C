# include <stdio.h>

void main() {
    /**4. Dado dois vetores, A (5 elementos) e B (8 elementos), faça um programa em C que
    imprima todos os elementos comuns aos dois vetores.**/

    int a[5], b[8], novo[5], i, j, x, n;

    printf("Informe os valores de A:\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &x);
        a[i] = x;
    }

    printf("Informe os valores de B:\n");
    for(i = 0; i < 8; i++){
        scanf("%d", &x);
        b[i] = x;
    }

    for(i = 0; i < 5; i++){
        n = a[i];
        for(j = 0; j < 8; j++){
            if(n == b[j]){
                novo[i] = n;
            }
        }
    }

    printf("Imprimindo os numeros iguais: ");
    for(i = 0; i < 5; i++){
        if(novo[i] != 0){
            printf("%d ", novo[i]);
        }
    }

}
