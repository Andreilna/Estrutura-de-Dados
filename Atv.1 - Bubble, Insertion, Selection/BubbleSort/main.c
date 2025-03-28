#include <stdio.h>
#include <stdlib.h>

// BUBBLE SORT

void BubbleSort(int* v, int n) { //n é o tamanho do vetor
    int i, fim, aux;
    for (fim = n - 1; fim > 0; --fim) {
        for (i = 0; i < fim; ++i) {
            if (v[i] > v[i + 1]) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
    }
}

int main() {
    int i = 0;
    int vetor[] = {5, 3, 8, 6, 2, 7, 4, 1};
    int n = 8;

    printf("Bubble Sort \n----------------------- \n");
    printf("Vetor antes de ordenar: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    BubbleSort(vetor, n);

    printf("Vetor depois de ordenar: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("----------------------- \n");

    return 0;
}
