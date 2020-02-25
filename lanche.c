#include<stdio.h>

int main(){

    int cod, x;
    float preco;

    scanf("%d %d", &cod, &x);

    if(cod == 1){
        preco = 4.00;
    }
    if(cod == 2){
        preco = 4.50;
    }
    if(cod == 3){
        preco = 5.00;
    }
    if(cod == 4){
        preco = 2.00;
    }
    if(cod == 5){
        preco = 1.50;
    }

    printf("Total: R$ %.2f\n", x * preco);

    return 0;
}
