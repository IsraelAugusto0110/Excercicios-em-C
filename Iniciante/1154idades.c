#include<stdio.h>

void main(){
    float idade, soma = 0, c = 0;

    do{
        scanf("%f", &idade);
        if(idade >= 0){
            soma += idade;
            c++;
        }
    }while(idade > 0);

    printf("%.2f\n", soma/c);
}
