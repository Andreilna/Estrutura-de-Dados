#include <stdio.h>
#include <stdlib.h>

// CRIAÇÃO DO TIPO DE DADOS ALUNO
typedef struct Aluno{
    char nome[30];
    int RA;
    float nota;
}A;

int main(){
    A alunos[2];

    // Preenchimento dos campos de a1
    printf("Informe o nome de a1: ");
    scanf("%s", &alunos[0].nome);

    printf("Informe o RA de a1: ");
    scanf("%d", &alunos[0].RA);

    printf("Informe a nota de a1: ");
    scanf("%f", &alunos[0].nota);

    // Preenchimento dos campos de a2
    printf("\n\nInforme o nome de a2: ");
    scanf("%s", &alunos[1].nome);

    printf("Informe o RA de a2: ");
    scanf("%d", &alunos[1].RA);

    printf("Informe a nota de a2: ");
    scanf("%f", &alunos[1].nota);

    // Exibir as informações
    printf("\nNome 1: %s\n", alunos[0].nome);
    printf("RA 1: %d\n", alunos[0].RA);
    printf("Nota 1: %.1f\n", alunos[0].nota);

    printf("\nNome 2: %s\n", alunos[1].nome);
    printf("RA 2: %d\n", alunos[1].RA);
    printf("Nota 2: %.1f\n", alunos[1].nota);

    return 0;
}
