#include<stdio.h>

void main(){
    int N, X, Y;

    scanf("%d", &N);

    while(N--){
        scanf("%d %d", &X, &Y);

        if(Y == 0){
            printf("divisao impossivel\n");
        }else{
            printf("%.1lf\n", (float) X/(float)Y);
        }
    }
}
