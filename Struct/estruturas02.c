#include<stdio.h>
#define MAX 6

typedef struct{
    int dia;
    int mes;
    int ano;
}dma;

dma x;
dma y;

dma fim_evento(dma datainicio, int duracao);

void main(){
    int t;

    scanf("%d %d %d", &x.dia, &x.mes, &x.ano);
    scanf("%d", &t);

    y = fim_evento(x, t);
    printf("%d/%d/%d\n", y.dia, y.mes, y.ano);
}

dma fim_evento(dma datainicio, int duracao){
    dma datafim;
    int anos, meses, dias;

    anos = duracao/365;
    meses = (duracao%365)/30;
    dias = (duracao%365)%30;

    if(datainicio.dia + dias > 30){
        meses += 1;
        dias = (datainicio.dia + dias) - 30;
    }
    if(datainicio.mes + meses > 12){
        anos = anos + 1;
        meses = (datainicio.mes + meses) - 12;
    }

    anos = datainicio.ano + anos;

    datafim.dia = dias;
    datafim.mes = meses;
    datafim.ano = anos;
    return datafim;
};
