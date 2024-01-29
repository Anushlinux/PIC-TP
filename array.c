#include <stdio.h>

int main(void) {
    int size;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    
    int array[size];

    
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    
    printf("Entered array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("Enter the choice: ");
    printf("1. Sum of the elements\n");
    printf("2. Product of the elements\n");
    printf("3. Largest element\n");
    int choice;
    scanf(" %d", &choice);

    switch (choice) {
        case 1:
            printf("add the elements?(y/n): ");
            char addChoice;
            scanf(" %d", &addChoice);
            if (addChoice == 'y') {
                int sum = 0;
                for (int i = 0; i < size; i++) {
                    sum += array[i];
                }
                printf("Sum of the elements: \n", sum);
            }
            break;

        case 2:
            printf("multiply the elements?(y/n): ");
            char multiplyChoice;
            scanf(" %d", &multiplyChoice);
            if (multiplyChoice == 'y') {
                int product = 1;
                for (int i = 0; i < size; i++) {
                    product *= array[i];
                }
                printf("Product of the elements: \n", product);
            }
            break;    

        case 3:
            printf("find the largest element?(y/n): ");
            char largestChoice;
            scanf(" %d", &largestChoice);
            if (largestChoice == 'y') {
                int largest = array[0];
                for (int i = 1; i < size; i++) {
                    if (array[i] > largest) {
                        largest = array[i];
                    }
                }
                printf("Largest element: \n", largest);
            }
            break;
    }
    return 0;
}

