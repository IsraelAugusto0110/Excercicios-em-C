#include<stdio.h>

void main(){
    int senha, correta = 2002;

    do{
            scanf("%d", &senha);
            if(senha == correta){
                break;
            }else{
                printf("Senha Invalida\n");
            }

    }while(senha != correta);

    printf("Acesso Permitido\n");
}
