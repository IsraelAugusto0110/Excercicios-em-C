# include <stdio.h>

void main() {
    /**3. Leia um vetor de 10 posições e em seguida um valor X qualquer. Seu programa
    devera fazer uma busca do valor de X no vetor lido e informar a posição em que foi
    encontrado ou se não foi encontrado.**/

    int vetor[10], n, x, encontrou = 0, i, posicao;

    for(i = 0; i < 10; i++){
        printf("Scaneanto os numeros: ");
        scanf("%d", &n);
        vetor[i] = n;
     }

     printf("Informe o valor para busca: ");
     scanf("%d", &x);

     for(i = 0; i < 10; i++){
        if(vetor[i] == x){
            encontrou = 1;
            posicao = i;
        }
     }

     if(encontrou == 1){
        printf("Encontramos o que voce procurava!\n");
        printf("Vetor[%d] = %d\n", posicao, x);
     }else{
         printf("Não encontramos o que voce procurava :( \n");
     }

}
