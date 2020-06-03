#include <stdio.h>

/*3) Crie o programa media que calcula a media dos valores entrados
C:\>media 5 6 4 6 8
Media=5,8*/

int main(int argc, char * argv[]) {

    int i, soma = 0;
    float media;

    for(i = 1; i < argc; i++){
        soma += atoi(argv[i]);
    }

    media = soma/(argc-1);

    printf("Media = %.1f\n", media);

    return 0;
}
