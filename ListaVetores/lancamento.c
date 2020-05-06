#include <stdio.h>
int main(){
    int l[37], i, n,la;

    for(i = 0; i < 37; i++){
        l[i] = 0;
    }

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &la);
        ++l[la];
    }

    for(i = 0; i < 37; i++){
        if(l[i] == 0){
            continue;
        }
        printf("Houve %d lancamentos do %d\n",l[i],i);
    }
}
