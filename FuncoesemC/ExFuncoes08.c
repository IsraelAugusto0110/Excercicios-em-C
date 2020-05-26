# include <stdio.h>

int encaixa(int x, int y);

void main() {
    int a, b;
    /*primeiro pedimos o quantos digito em cada*/
    printf("Quantos digitos em A? ");
    scanf("%d", &a);

    printf("Quantos digitos em B? ");
    scanf("%d", &b);

    encaixa(a, b);
}

/*(a) Construa uma função encaixa que, dados
dois inteiros positivos a e b, verifica se b
 corresponde aos últimos dígitos de a.*/

int encaixa(int x, int y){/*x=a e y=b*/
    int i;
    int c;/* que é o comprimento de a - b*/
    int d = 10;/*dividir sucessivamente por 10 e comparar os valores*/

    /*se o comprimento de m for maior que de n entao nao encaixa*/
    if(y > x){
        printf("Nao encaixa!");
    }else{
        c = x - y;
        if(c == y){
            printf("Encaixa!");
        }else{
            printf("Nao encaixa!");
        }
    }

    return 0;
}
