#include <stdio.h>
#include <stdlib.h>

typedef struct Pesquisa{
    int idade;
    char sexo[9];
    float salario;
    int numeroFilhos;
}p;

int main(){
    p pesquisas[2];
    float media;
    int i;

    for(i = 0; i < 2; i++){
        printf("\nDigite sua idade - (morador N%d): ", i + 1);
        scanf("%d", &pesquisas[i].idade);

        printf("Digite seu sexo - (morador N%d): ", i + 1);
        scanf("%s", &pesquisas[i].sexo);

        printf("Digite seu salario - (morador N%d): ", i + 1);
        scanf("%f", &pesquisas[i].salario);

        printf("Digite o numero de filhos - (morador N%d): ", i + 1);
        scanf("%d", &pesquisas[i].numeroFilhos);

        media += pesquisas[i].salario / 2;
    }

    printf("A media dos salarios dos moradores eh: %.2f\n", media);

    return 0;
}
