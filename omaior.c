#include<stdio.h>
#include<math.h>

int main(){

    int N;

    scanf("%d", &N);

    printf("%d:%d:%d\n", (N/60)/60, N/60, N%60);

    return 0;
}
