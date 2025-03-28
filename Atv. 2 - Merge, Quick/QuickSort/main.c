#include <stdio.h>
#include <stdlib.h>

// Quick Sort

void quick_sort(int vet[], int inicio, int fim){
    if (inicio < fim){
        int pivo_indice = particiona_random(vet, inicio, fim);

        quick_sort(vet, inicio, pivo_indice - 1);
        quick_sort(vet, pivo_indice + 1, fim);
    }
}

int particiona_random(int vet[], int inicio, int fim){
    int pivo_indice = (rand() % (fim - inicio + 1)) + inicio;

    troca(vet, pivo_indice, fim);

    return particiona(vet, inicio, fim);
}

int particiona(int vet[], int inicio, int fim){
    int pivo, pivo_indice, i;

    pivo = vet[fim];
    pivo_indice = inicio;

    for(i = inicio; i < fim; i++){
        if(vet[i] <= pivo){
            troca(vet, i, pivo_indice);
            pivo_indice++;
        }
    }

    troca(vet, pivo_indice, fim);

    return pivo_indice;
}

void troca(int vet[], int i, int j){
    int aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

int main(){
    int vet[] = {66, 23, 15, 95, 14, 8, 90};
    int size = 7;

    printf("Quick Sort \n----------------------- \n");
    printf("Original: ");
    for (int i = 0; i < size; i++)
    printf("%d ", vet[i]);
    printf("\n");

    quick_sort(vet, 0, size - 1);

    printf("Ordenado: ");
    for (int i = 0; i < size; i++)
    printf("%d ", vet[i]);
    printf("\n");
    printf("----------------------- \n");

    return 0;
}
