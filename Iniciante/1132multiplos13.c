#include<stdio.h>

void main(){
    int soma = 0, x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    if(x < y){
        for(int i = x ; i <= y; i++){
            if(i % 13 != 0){
                soma = soma + i;
            }
        }
    }

    if(x > y){
        for(int i = y ; i <= x; i++){
            if(i % 13 != 0){
                soma = soma + i;
            }
        }
    }

    printf("%d\n", soma);
}
