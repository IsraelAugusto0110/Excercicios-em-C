#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int den;
    int num;
}Fracao;

void exibefracao(Fracao a);

Fracao somafracao(Fracao a, Fracao b);

Fracao multiplicafracao(Fracao a, Fracao b);

Fracao subtraifracao(Fracao a, Fracao b);

void main(){
    Fracao q;
    Fracao m;
    q.den = 5;
    q.num = 2;
    m.den = 3;
    m.num = 2;

    //exibe fracao
    exibefracao(q);
    exibefracao(m);
    //soma fracao
    somafracao(q, m);
    //multiplica fracao
    multiplicafracao(q, m);
    //subtrai fracao
    subtraifracao(q, m);
}

void exibefracao(Fracao a){
    printf("Fracao: %d/%d\n", a.den, a.num);
}

Fracao somafracao(Fracao a, Fracao b){
    int x, y;
    x = (a.den*b.num) + (b.den * a.num);
    y = a.num * b.num;
    printf("Soma Fracao: %d/%d\n", x, y);
}

Fracao multiplicafracao(Fracao a, Fracao b){
    int x, y;
    x = a.den * b.den;
    y = a.num * b.num;
    printf("Multiplica Fracao: %d/%d\n", x, y);
}

Fracao subtraifracao(Fracao a, Fracao b){
    int x, y;
    x = (a.den*b.num) - (b.den * a.num);
    y = a.num * b.num;
    printf("Subtrai Fracao: %d/%d\n", x, y);
}
