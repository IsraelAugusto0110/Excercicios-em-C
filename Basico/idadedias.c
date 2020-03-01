#include <stdio.h>

int main() {
    float n;

    scanf("%f", &n);

    if(n > 0 && n <= 25){
        printf("Intervalo [0, 25]\n");
    }
    else{
        printf("Fora do intervalo\n");
    }

    return 0;
}
