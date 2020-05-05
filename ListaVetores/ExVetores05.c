# include <stdio.h>

void main() {
    /**5. Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos. Faça
    um programa em C que calcule o produto escalar P de A por B. (Isto é, P =
    A[1]*B[1] + A[2]*B[2] + ... A[N]+B[N]).**/

    int n[10], m[10], p[10], x, i, soma = 0;

    printf("Preenchendo o vetor N: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &x);
        n[i] = x;
    }

    printf("Preenchendo o vetor M: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &x);
        m[i] = x;
    }

    /*vetor P*/
    for(i = 0; i < 10; i++){
        p[i] = n[i] * m[i];
        soma = soma + p[i];
    }

    printf("O produto escalar e P = %d ", p[0]);
    for(i = 1; i <= 9; i++){
        printf("+ %d ", p[i]);
    }
    printf("= %d", soma);
}
