
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandomArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (size*10);
    }
}

void printArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void straightMaxMin(int arr[], int size, int *max, int *min) {
    *max = *min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        } else if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    srand(time(NULL));

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];

    generateRandomArray(array, size);
    printf("Generated: ");
    printArray(array, size);

    for (int i = 1; i < size; i++) {
        if (array[i] == array[i - 1]) {
            array[i]++;
        }
    }

    clock_t start_time = clock();

    int max, min;
    straightMaxMin(array, size, &max, &min);

    clock_t end_time = clock();

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    double time_taken = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);

    return 0;
}