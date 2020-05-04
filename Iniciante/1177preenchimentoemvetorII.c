#include<stdio.h>

void main(){
    int T, N[1000];
    scanf("%d", &T);

    int i, j;
    for(i=0; i < 1000; i++){
        if(j == T)
            j = 0;
        N[i] = j;
        printf("N[%d] = %d\n", i, N[i]);
        j++;
    }
}
