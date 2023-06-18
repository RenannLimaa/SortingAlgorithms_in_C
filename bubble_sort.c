#include <stdio.h> 

void bubbleSort(int array[], int length);

int main() {
    int array[] = {5, 3, 4, 2, 1};

    printf("Array original:\n");
    for(int i=0; i<5; i++)
        printf("[%d] = %d\n", i, array[i]);
    printf("\n");
    bubbleSort(array, 5);

    for(int i=0; i<5; i++) {
        printf("[%d] = %d\n", i, array[i]);
    }
    printf("\n");
}

void bubbleSort(int array[], int length) {
    int i, j;

    for(i=0; i<length-1; i++) {
        for(j=0; j < length-i-1; j++) {
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}