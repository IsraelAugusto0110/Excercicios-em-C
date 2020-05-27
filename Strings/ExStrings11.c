# include<stdio.h>
# include<string.h>

/*11. Fazer um programa em C que leia uma frase de até 50 caracteres
comando gets) e imprima a frase sem os espaços em branco. Imprimir também a
quantidade de espaços em branco da frase.*/

void main(){
    char frase[50];
    int i = 0, c = 0;

    gets(frase);

    while(frase[i] != 0){
        if(frase[i] != ' '){
            printf("%c", frase[i]);
        }else{
            c++;
        }
        i++;
    }
    printf("\n");
    printf("%d espacos em branco\n", c);
 }
