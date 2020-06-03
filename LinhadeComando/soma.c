#include <stdio.h>

/*2) Crie uma programa que seja soma dos parâmetros entrados, veja abaixo
C:\>soma 1 3 4 5 8
Soma = 17
C:\>soma
Faltam parâmetros
C:\>soma -h
Sintaxe: soma <v1> <v2> <v3> ... <vn>
Dica : utiliza a função atoi( ) que converte para inteiro*/

int main(int argc, char * argv[]) {

    if(argc - 1 == 0){
        printf("Faltam parametros\n");
    }else{
        int i, soma = 0;
        for(i = 1; i < argc; i++){
            soma += atoi(argv[i]);
        }
        printf("Soma = %d\n", soma);
    }

    return 0;
}
