#include<stdio.h>

void main(){
    int i;
    double x[100], n;

    for(i = 0; i <= 99; i++){
        scanf("%lf", &n);
        x[i] = n;
    }

    for(i = 0; i <= 99; i++){
        if(x[i] <= 10){
            printf("A[%d] = %.1lf\n", i, x[i]);
        }
    }
}
