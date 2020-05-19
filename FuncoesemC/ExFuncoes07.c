# include <stdio.h>

int contadigitos(int n);

void main() {
    /*Um número a é dito permutação de um número b s
    e os dígitos de a formam uma permutação dos dígitos de b.
    Exemplo: 5412434 é uma permutação de 4321445, mas não
    é uma permutação de 4312455.*/

    int x;
    printf("Quantos algarismos? ");
    scanf("%d", &x);
    contadigitos(x);

}

        /*(a) Faça uma função contadígitos que, dados um inteiro n
        e um inteiro d, 0<d<9, devolve quantas vezes o dígito d aparece em n.*/
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
