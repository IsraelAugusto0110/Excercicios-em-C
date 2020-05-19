# include <stdio.h>

int div(int n);

void main() {
    /*3. Faça uma função que recebe, por parâmetro,
    um valor inteiro e positivo e retorna o número de
    divisores desse valor.*/

    int x;

    printf("Qual numero? ");
    scanf("%d", &x);

    printf("O numero %d tem %d divisores", x, div(x));

}

int div(int n){
    int i, d = 0;

    for(i = 1; i <= n/2; i++){
        if(n%i == 0){
            d++;
        }
    }

    return d;
}
