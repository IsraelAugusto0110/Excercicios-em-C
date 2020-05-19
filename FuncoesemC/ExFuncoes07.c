# include <stdio.h>

int contadigitos(int n);

void main() {
    /*Um n�mero a � dito permuta��o de um n�mero b s
    e os d�gitos de a formam uma permuta��o dos d�gitos de b.
    Exemplo: 5412434 � uma permuta��o de 4321445, mas n�o
    � uma permuta��o de 4312455.*/

    int x;
    printf("Quantos algarismos? ");
    scanf("%d", &x);
    contadigitos(x);

}

        /*(a) Fa�a uma fun��o contad�gitos que, dados um inteiro n
        e um inteiro d, 0<d<9, devolve quantas vezes o d�gito d aparece em n.*/
int contadigitos(int n){
    int x[n], i, z, c = 0;/*criei um vetor de n posicoes, um contador i,
                            uma variavel z para armazenar o que for digitado
                            e um contador que guarda quantas vezes z aparece*/

    for(i = 0; i < n; i++){
        x[i] = 0;
    }

    for(i = 0; i < n; i++){
        printf("Vetor1[%d]: ", i);
        scanf("%d", &z);
        x[i] = z;
    }

    printf("D: ");
    scanf("%d", &z);

    for(i = 0; i < n; i++){
        if(z == x[i]){
            c++;
        }
    }

    printf("%d aparece %d vezes.\n", z, c);
    return c;
}
