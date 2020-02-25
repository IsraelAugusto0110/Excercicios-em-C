#include<stdio.h>
#include<math.h>

int main(){

    int cp1, cp2, qtdp1, qtdp2;
    float p1, p2, total;

    scanf("%d %d %f\n", &cp1, &qtdp1, &p1);
    scanf("%d %d %f", &cp2, &qtdp2, &p2);

    total = (qtdp1 * p1) + (qtdp2 * p2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
