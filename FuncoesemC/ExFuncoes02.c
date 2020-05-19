# include <stdio.h>

int soma(int s);

void main() {
    /*2. Escreva uma função que leia um inteiro
    não-negativo n e imprima a soma dos n
        primeiros números primos.*/
    int n, resultado;
    scanf("%d", &n);
    resultado = soma(n);
    printf("A soma = %d\n", resultado);
}

int soma(int n){
    int i = 2, j = 1, s = 3; /*estou considerando que os 2 primeiros
                                numeros primos sao 1 e 2;*/

    while(i <= n){
        if(i%j != 0){
            s = s + i;
        }
        j++;
        i++;
    }

    return s;
}
