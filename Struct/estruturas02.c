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

int trocames(int mes);
/*define a quantidade de dias de acordo com o mes, nao considerando anos bissextos*/

void main(){
    int t;

    scanf("%d %d %d", &x.dia, &x.mes, &x.ano);
    scanf("%d", &t);

    y = fim_evento(x, t);
    printf("%d/%d/%d\n", y.dia, y.mes, y.ano);
}

dma fim_evento(dma datainicio, int duracao){
    dma datafim;
    int anos, meses, dias, qdias;

    qdias = trocames(datainicio.mes);

    anos = duracao/365;
    meses = (duracao%365)/30;
    dias = (duracao%365)%30;

    if(datainicio.dia + dias > qdias){
        meses += 1;
        dias = (datainicio.dia + dias) - qdias;
    }else{
        dias = (datainicio.dia + dias);
    }
    if(datainicio.mes + meses > 12){
        anos = anos + 1;
        meses = (datainicio.mes + meses) - 12;
    }else{
        meses = (datainicio.mes + meses);
    }

    anos = datainicio.ano + anos;

    datafim.dia = dias;
    datafim.mes = meses;
    datafim.ano = anos;
    return datafim;
};


int trocames(int mes){
    int qdias;

    switch(mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            qdias = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            qdias = 30;
            break;
        case 2:
            qdias = 28;
            break;
    }
    return qdias;
}
