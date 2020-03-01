#include<stdio.h>

int main(){
    int A, B, C, D, DIFERENCA;

    scanf("%d\n", &A);
    scanf("%d\n", &B);
    scanf("%d\n", &C);
    scanf("%d", &D);

    DIFERENCA = (A * B) - (C * D);

    printf("DIFERENCA =%d\n", DIFERENCA);

    return 0;
}
