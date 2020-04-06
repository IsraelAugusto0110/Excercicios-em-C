#include<stdio.h>

void main(){
    int i = 1;
    float nota, soma = 0;

    do{
            scanf("%f", &nota);
            if(nota < 0 || nota > 10){
                printf("nota invalida\n");
            }else{
                soma += nota;
                i++;
            }

    }while(i <= 2);

    printf("media = %.2f\n", soma/2);
}
