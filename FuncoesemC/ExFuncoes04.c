# include <stdio.h>

float tri(float a, float b, float c);

void main() {
    /*4. Escreva uma função que recebes 3 valores reais X, Y e Z
        e que verifique se esses valores podem ser os comprimentos
        dos lados de um triângulo e, neste caso, retornar qual
        o tipo de triângulo formado.*/

    float x, y, z;
    printf("Lado A: ");
    scanf("%f", &x);
    printf("Lado B: ");
    scanf("%f", &y);
    printf("Lado C: ");
    scanf("%f", &z);

    tri(x, y, z);
}

float tri(float a, float b, float c){
    int t = 1; /*se for triangulo recebe 1 senão recebe 0*/

    if(a+b>c && c+a>b && c+b>a){
        t = 1;
    }else{
        t = 0;
    }

    if(t == 0){
        printf("Nao e triangulo.\n");
    }else{
        if(a==b && a==c){
            printf("Equilatero. \n");
        }else if(a==b || b==c || a==c){
            printf("Isosceles.\n");
        }else if(a!=b && a!=c && c!=b){
            printf("Escaleno.\n");
        }
    }

    return t;
}
