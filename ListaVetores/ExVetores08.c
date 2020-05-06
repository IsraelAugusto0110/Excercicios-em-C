# include <stdio.h>

void main() {
    /**8. Fazer um programa em C para ler uma quantidade N de alunos.Ler a nota de cada
    um dos N alunos e calcular a média aritmética das notas. Contar quantos alunos
    estão com a nota acima de 5.0. Obs.: Se nenhum aluno tirou nota acima de 5.0,
    imprimir mensagem: Não há nenhum aluno com nota acima de 5.**/

    int n, i, j;

    scanf("%d", &n);

    float notas[n][n],x, media, soma = 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("aluno [%d] nota [%d]: ", i, j);
            scanf("%f", &x);
            notas[i][j] = x;
            /**neste caso, cada linha[i] representa um aluno
            e as colunas[j] as notas**/
            soma = soma + x;
        }
    }

    media = soma / (n*n);

    printf("a media das notas e %.1f", media);
}
