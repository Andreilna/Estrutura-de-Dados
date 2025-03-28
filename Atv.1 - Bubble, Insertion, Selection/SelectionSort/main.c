#include <stdio.h>
#include <stdlib.h>

// Selection Sort

void SelectionSort(int*v,int n){ // n é o tamanho do vetor
    int i, j, min, aux;
    for(i=0;i<(n-1);i++){
        min = i;
        for(j=(i+1);j<n;j++){
            if(v[j]<v[min])
                min = j;
        }
        if(v[i]!=v[min]){
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }
}

int main() {
    int i = 0;
    int vetor[] = {9, 1, 8, 7, 6, 2, 4, 5};
    int n = 8;

    printf("Selection Sort \n----------------------- \n");
    printf("Vetor antes de ordenar: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    SelectionSort(vetor, n);

    printf("Vetor depois de ordenar: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("----------------------- \n");

    return 0;
}
