#include<stdio.h>

void main(){
    int x;

    while(x != 0){
        scanf("%d", &x);

        for(int i = 1; i <= x; i++){
            if(i == x){
                printf("%d\n", i);
            }else{
                printf("%d ", i);
            }
        }
    }
}
