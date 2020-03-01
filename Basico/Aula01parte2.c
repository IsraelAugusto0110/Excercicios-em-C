#include<stdio.h>

int main(){
    //inverte numeros
    int numero, de, un;
    numero = 0;
    while(numero == 0){
        printf("Digite um numero: \n");
        scanf("%d", &numero);
    }
    de = numero/10;
    un = numero%10;
    printf("%d%d", un, de);

    return 0;
}
