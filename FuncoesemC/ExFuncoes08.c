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

/*(a) Construa uma fun��o encaixa que, dados
dois inteiros positivos a e b, verifica se b
 corresponde aos �ltimos d�gitos de a.*/

int encaixa(int x, int y){/*x=a e y=b*/
    int i;
    int c;/* que � o comprimento de a - b*/

    /*se o comprimento de m for maior que de n entao nao encaixa*/
    if(y > x){
        printf("Nao encaixa!");
    }else{
        int vx[x], vy[y];
        /*lemos dois vetores de a e b comprimento*/
        for(i = 0; i < x; i++){
            printf("VetorA[%d]: ", i);
            scanf("%d", &x);
            vx[i] = x;
        }
        for(i = 0; i < y; i++){
            printf("VetorB[%d]: ", i);
            scanf("%d", &y);
            vy[i] = y;
        }

        /*verificar se os c ultimos de a s�o iguais aos ultimos de b*/

        printf("Encaixa!");
    }

    return 0;
}
