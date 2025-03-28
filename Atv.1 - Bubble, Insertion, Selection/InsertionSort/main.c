#include <stdio.h>
#include <stdlib.h>

// Insertion Sort

void InsertionSort ( int*v,int n ){ //n é o tamanho do vetor
    int i = 0;
    int j = 1;
    int aux = 0;
    while (j < n){
        aux = v[j];
        i = j - 1;
        while ((i >= 0) && (v[i] > aux)){
            v[i + 1] =  v[i];
            i = i - 1;
        }
        v[i + 1] = aux;
        j = j + 1;
    }
}

int main() {
    int i = 0;
    int vetor[] = {6, 4, 9, 7, 3, 8, 5, 2};
    int n = 8;

    printf("Insertion Sort \n----------------------- \n");
    printf("Vetor antes de ordenar: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    InsertionSort(vetor, n);

    printf("Vetor depois de ordenar: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("----------------------- \n");

    return 0;
}
