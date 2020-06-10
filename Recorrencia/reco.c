#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main(){
    float pi = 3.1415, R, soma = 0;
    int x, i = 1, b = 2;

    printf("X: ");
    scanf("%d", &x);

    R = (x * pi)/180;

    R = (pow(R,2));

    do{
        soma += R/b;
        R *= (-pow(R, 2));
        b = ((2 * i) + 2) * ((2*i) + 1) * b;
        i++;
    }while(i<=5);

    printf("Taylor(%d) = %.3f\n", x, soma);
}
