#include<stdio.h>

void main(){
    int M, N, i, soma;

    do{
            scanf("%d %d", &M, &N);
            soma = 0;

            if(M <= 0 || N <=0){
                break;
            }else{
                if(M < N){
                    for(i = M; i <= N; i++){
                        printf("%d ", i);
                        soma = soma + i;
                    }
                    printf("Sum=%d\n", soma);
                }

                if(N < M){
                    for(i = N; i <= M; i++){
                        printf("%d ", i);
                        soma = soma + i;
                    }
                    printf("Sum=%d\n", soma);
                }

                if(M == N){
                    soma = M;
                    printf("%d Sum=%d\n", M, soma);
                }
            }

    }while(M > 0 || N > 0);
}
