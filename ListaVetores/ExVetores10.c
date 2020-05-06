# include <stdio.h>

void main() {
    /**10. Deseja-se publicar o número de acertos de cada aluno em uma prova em forma de
    testes. A prova consta de 30 questões, cada uma com cinco alternativas
    identificadas por A, B, C, D e E. Para isso são dados:
    a. o cartão gabarito;
    b. o número de alunos da turma;
    c. o cartão de respostas para cada aluno, contendo o seu número e suas
    respostas.**/

    int i;

    int g[3], x;/*primeiro criamos um vetor para armazenar as
                        resposts corretas*/

    for(i = 0; i < 3; i++){
        printf("Questao %d: ", g[i] + 1);
        scanf("%d", &x);
    }
}
