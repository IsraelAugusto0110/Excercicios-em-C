#include<stdio.h>

void main(){
    int a = 0, g = 0, d = 0, tipo;

    while(tipo != 4){
        scanf("%d", &tipo);

        if(tipo == 1){
            a++;
        }else if(tipo == 2){
            g++;
        }else if(tipo == 3){
            d++;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);
}
