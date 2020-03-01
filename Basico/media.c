#include<stdio.h>
#include<math.h>

int main(){

    double A, B, C, media;

    scanf("%lf\n", &A);
    scanf("%lf\n", &B);
    scanf("%lf", &C);

    media = (A*2 + B*3 + C*5)/10;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}
