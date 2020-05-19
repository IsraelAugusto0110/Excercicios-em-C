# include <stdio.h>

float f(float s);

void main() {
    /*5. Escreva uma função que recebe por parâmetro um valor
        inteiro e positivo N e retorna o valor de S. Utilize
        para isso a chamada de uma outra função, esta recursiva,
        que calcule o fatorial de um número.
        S = 1 + 1/1! + ½! + 1/3! + 1 /N!*/
    int n;
    scanf("%d", &n);

    printf("Fatorial = %.3f", f(n));
}

float f(float s){
    float fatora = 12, soma = 1;
    int i = 1, j;

    for(fatora = 1; i <= s; i++){
        for(j = 1; j <= i; j++){
            fatora = fatora * j;
        }
        soma = soma + (1/fatora);
    }

    return soma;
}
