#include<stdio.h>

void main(){
    int x, z;

    scanf("%d", &x);
    scanf("%d", &z);

    while(z <= x){
        scanf("%d", &z);
    }

    int a = x;

    for(int i = 1; z >= a; i++){
        a += (x + 1);
    }

    printf("%d\n", i);
}
