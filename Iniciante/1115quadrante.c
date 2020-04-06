#include<stdio.h>

void main(){
    int X, Y;

    do{
            scanf("%d %d", &X, &Y);

            if(X == 0  || Y == 0){
                break;
            }

            if(X > 0 && Y > 0){
                printf("primeiro\n");
            }else if(X > 0 && Y < 0){
                printf("quarto\n");
            }else if(X < 0 && Y > 0){
                printf("segundo\n");
            }else if(X < 0 && Y < 0){
                printf("terceiro\n");
            }

    }while(X != 0 || Y != 0);
}
