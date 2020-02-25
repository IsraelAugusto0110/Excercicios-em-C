#include<stdio.h>
#include<math.h>

int main(){
    char nome[] = "";
    float salario, vendas, total;
    scanf("%s\n", &nome);

    scanf("%f\n", &salario);
    scanf("%f", &vendas);

    total = salario + (vendas * 0.15f);

    printf("TOTAL = R$ %.2f\n", total);

    return 0;
}
