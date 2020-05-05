# include <stdio.h>

void main() {
    /*1. Dada uma sequência de n números imprimir na ordem
    inversa à da leitura.*/

    int n, x, i;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);

    int vetor[n];

    printf("Insira os numeros: ");

    for(i = 0; i < n; i++){
        scanf("%d", &x);
        vetor[i] = x;
    }

    printf("Invertendo os numeros: ");

    for(i = n - 1; i >= 0; i--){
        printf("%d ", vetor[i]);
    }
}
