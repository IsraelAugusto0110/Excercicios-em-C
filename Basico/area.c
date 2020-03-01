#include<stdio.h>
#include<math.h>

int main(){

    float A, B, C;
    double tri, circ, trap, quad, ret;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    tri = (A * C) / 2;
    circ = 3.14159 * (C * C);
    trap = ((A + B)/2) * C;
    quad = B * B;
    ret = A * B;

    printf("TRIANGULO: %.3f\n", tri);
    printf("CIRCULO: %.3f\n", circ);
    printf("TRAPEZIO: %.3f\n", trap);
    printf("QUADRADO: %.3f\n", quad);
    printf("RETANGULO: %.3f\n", ret);

    return 0;
}
