#include<stdio.h>

void main(){
    int n, x, y;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d %d", &x, &y);
        int soma = 0, m = 0;
        while(m < y){
            if(x%2 != 0){
                soma += x;
                m++;
            }
            x++;
        }
        printf("%d\n", soma);
    }
}
