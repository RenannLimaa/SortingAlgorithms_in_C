#include <stdio.h>

void selectionSort(int array[], int length);

int main() {
    int array[] = {5, 9, 7, 6, 4, 0, 2, 3, 8, 1};

    printf("Array original:\n");
    for(int i=0; i<10; i++)
        printf("[%d] = %d ", i, array[i]);
    printf("\n");
    selectionSort(array, 10);

    for(int i=0; i<10; i++) {
        printf("[%d] = %d ", i, array[i]);
    }
    printf("\n");
}


void selectionSort(int array[], int length) {
    int i, j;

    for(i=0; i<length-1; i++) {
        int min_pos = i;
        for(j=i+1; j<length; j++) {
            if(array[j] < array[min_pos])
                min_pos = j;
        }

        if(min_pos != i) {
            int temp = array[i];
            array[i] = array[min_pos];
            array[min_pos] = temp;
        }
    }
}
