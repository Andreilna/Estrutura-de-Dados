#include <stdio.h>
#include <stdlib.h>

// Merge Sort

void merge(int* v, int left, int middle, int right){
    int helper[11];
    for (int i = left; i <= right; i++){
        helper[i] = v[i];
    }

    int i = left;
    int j = middle + 1;
    int k = left;

    while (i <= middle && j <= right){
        if (helper[i] <= helper[j]){
            v[k] = helper[i];
            i++;
        } else {
            v[k] = helper[j];
            j++;
        }
        k++;
    }

    while (i <= middle){
        v[k] = helper[i];
        i++;
        k++;
    }
}

void mergeSort(int* v, int left, int right){
    if (left >= right)
        return;
    else {
        int middle = (left + right) / 2;
        mergeSort(v, left, middle);
        mergeSort(v, middle + 1, right);

        merge(v, left, middle, right);
    }
}

int main(){
    int v[] = {38, 27, 43, 3, 9, 82, 10};
    int size = 7;

    printf("Merge Sort \n----------------------- \n");
    printf("Original: ");
    for (int i = 0; i < size; i++)
    printf("%d ", v[i]);
    printf("\n");

    mergeSort(v, 0, size - 1);

    printf("Ordenado: ");
    for (int i = 0; i < size; i++)
    printf("%d ", v[i]);
    printf("\n");
    printf("----------------------- \n");

    return 0;
}
