#include <stdio.h>
#include <stdlib.h>

typedef struct Livro{
    char titulo[30];
    int anoEdicao;
    int numeroPag;
    float preco;
}L;

int main(){
    L livros[5];
    float media;

    for(int i = 0; i < 5; i++){
        printf("\nInforme o titulo do livro %d: ", i + 1);
        scanf("%s", &livros[i].titulo);

        printf("Informe o ano da edicao do livro %d: ", i + 1);
        scanf("%d", &livros[i].anoEdicao);

        printf("Informe o numero de paginas do livro %d: ", i + 1);
        scanf("%d", &livros[i].numeroPag);

        printf("Informe o preco do livro %d: \n", i + 1);
        scanf("%f", &livros[i].preco);

        media += livros[i].numeroPag / 5;

    }

    printf("A media do numero de paginas dos livros eh: %.2f\n", media);

    return 0;
}
