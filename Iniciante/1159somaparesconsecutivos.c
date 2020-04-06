#include<stdio.h>

void main(){
    int value;
    while(scanf("%d", &value)){
        if(value == 0){
            return 0;
        }
        int i = 0, aux = 0;
        while(i<5){
            if(value % 2 == 0){
                aux += value;
                i++;
            }
            value++;
        }
        printf("%d\n", aux);
        value = 0;
    }
}
