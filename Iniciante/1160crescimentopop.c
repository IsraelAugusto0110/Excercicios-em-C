#include<stdio.h>

void main(){
    int a, b, t, teste, i;
    double taxaA, taxaB;

    scanf("%d", &teste);

    for(i = 1; i<= teste; i++){
            t = 0;
        scanf("%d %d %lf %lf", &a, &b, &taxaA, &taxaB);

        while(a <= b){
            a *= (taxaA/100.0) + 1.0;
            b *= (taxaB/100.0) + 1.0;
            t++;
        }
        if(t > 100){
            printf("Mais de 1 seculo.\n");
            break;
        }else{
            printf("%d anos.\n", t);;
        }
    }
}
