# include <stdio.h>

int primo(int x);

void main() {
    /*1. Escreva uma função que recebe um inteiro positivo m
        e devolve 1 se m é primo, 0 caso contrário.*/

    int m;
    scanf("%d", &m);
    printf("%d\n", primo(m));
}

int primo(int x){
    int p = 1, i = 2;

    while(p == 1 && i <= x/2){
        if(x%i == 0){
            p = 0;
        }
        i++;
    }

    if(p == 1){
        return (1);
    }else{
        return (0);
    }
}
