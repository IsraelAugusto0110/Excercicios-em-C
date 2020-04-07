#include<stdio.h>

void main(){
    int x[10], n, i;

    for(i = 0; i < 10; i++){
            scanf("%d", &n);
            if(n <= 0){
                x[i] = 1;
            }else{
                x[i] = n;
            }
            printf("X[%d] = %d\n", i, x[i]);
    }
}
