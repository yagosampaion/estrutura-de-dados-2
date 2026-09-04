#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float notas[3];
};

int main() {

    struct Aluno alunos[5];

    float media[5];
    float soma;
    float maiorMedia = 0;

    int melhorAluno = 0;
    int i, j;

    for (i = 0; i < 5; i++) {

        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        soma = 0;

        for (j = 0; j < 3; j++) {

            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);

            soma = soma + alunos[i].notas[j];
        }

        media[i] = soma / 3;

        if (i == 0 || media[i] > maiorMedia) {
            maiorMedia = media[i];
            melhorAluno = i;
        }
    }

    printf("\n--- RESULTADOS ---\n");

    for (i = 0; i < 5; i++) {
        printf("\nAluno: %s", alunos[i].nome);
        printf("\nMedia: %.2f\n", media[i]);
    }

    printf("\nAluno com maior media: %s\n", alunos[melhorAluno].nome);
    printf("Maior media: %.2f\n", maiorMedia);

    return 0;
}