#include <stdio.h>

void insertionSort(int array[], int length);

int main() {
    int array[] = {5, 3, 4, 2, 1};

    printf("Array original:\n");
    for(int i=0; i<5; i++)
        printf("[%d] = %d\n", i, array[i]);
    printf("\n");
    insertionSort(array, 5);

    for(int i=0; i<5; i++) {
        printf("[%d] = %d\n", i, array[i]);
    }
    printf("\n");
}

void insertionSort(int array[], int length) {
    for(int i=1; i<length; i++) {
        int current_value = array[i];
        int j=i-1;

        while(j>=0 && array[j]>current_value) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = current_value;
    }
}
