# include <stdio.h>

int encaixa(int x, int y);

void main() {
    int a, b;
    printf("A: ");
    scanf("%d", &a);

    printf("B: ");
    scanf("%d", &b);

    encaixa(a, b);
}

/*(a) Construa uma função encaixa que, dados
dois inteiros positivos a e b, verifica se b
 corresponde aos últimos dígitos de a.*/

int encaixa(int x, int y){
    int n[x], m[y], i, f, c = 0;
    /*se o comprimento de m for maior que de n entao nao encaixa*/
    if(y > x){
        printf("Nao encaixa!");
    }else{

        /*preenchemos os vetores com 0*/
        for(i = 0; i < x; i++){
            n[i] = 0;
        }
        for(i = 0; i < y; i++){
            m[i] = 0;
        }

        for(i = 0; i < x; i++){
            printf("A: ");
            scanf("%d", &f);
            n[i] = f;
        }

        for(i = 0; i < y; i++){
            printf("B: ");
            scanf("%d", &f);
            m[i] = f;
        }

        for(i = x - y; i <= y; i++){
            if(m[i] == n[i]){
                c++;
            }
        }

        if(c > 0){
            printf("Encaixa!");
        }else{
            printf("Nao encaixa!");
        }
    }

    return 0;
}
