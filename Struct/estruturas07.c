#include<stdio.h>
#define MAX 6

/*2. Escreva uma função que receba dois structs do tipo
dma, cada um representando uma data válida, e
devolva o número de dias que decorreram entre as duas
datas.*/

typedef struct{
    int dia;
    int mes;
    int ano;
}dma;

dma x;
dma y;

int calcula();

void main(){
    printf("Data de inicio: ");
    scanf("%d %d %d", &x.dia, &x.mes, &x.ano);

    printf("Data fim: ");
    scanf("%d %d %d", &y.dia, &y.mes, &y.ano);

    printf("%d dias\n\n", calcula());
}

int calcula(){
    int dias;

    dias = ((y.ano - x.ano) * 365) + ((y.mes - x.mes) * 30) + (y.dia - x.dia);

    return dias;
}
