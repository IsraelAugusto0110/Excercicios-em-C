#include<stdio.h>

void main(){
    int qtd, i = 0, valor;
    scanf("%d", &qtd);
    while(i<qtd){
        scanf("%d", &valor);
        int j = 1, aux = 0;
        while(j < valor){
            if(valor % j == 0){
                aux += j;
            }
            j++;
        }
        if(aux == valor){
            printf("%d eh perfeito\n", valor);
        }else{
            printf("%d nao eh perfeito\n", valor);
        }
        i++;
    }
}
