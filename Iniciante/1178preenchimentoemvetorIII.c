#include<stdio.h>

void main(){
    double x;
    int n[100];
    scanf("%lf", &x);

    int i;
    for(i = 0; i <= 99; i++){
        n[i] = x;
        printf("N[%d] = %.4f\n", i, x);
        x = x/2;
    }
}
