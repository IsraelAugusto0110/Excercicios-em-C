#include<stdio.h>

void main(){
    int X, Y;

    do{
            scanf("%d %d", &X, &Y);
            if(X < Y){
                printf("Crescente\n");
            }
            if(Y < X){
                printf("Decrescente\n");
            }

    }while(X != Y);
}
