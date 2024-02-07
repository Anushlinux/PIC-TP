#include <stdio.h>

int main(){
    int a;
    system("cls");
    printf("Enter the size of the array: ");
    scanf("%d", &a);
    int array[a];
    
    for (int i = 0; i < a; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
        printf("\n");
    }

    printf("Array: ");
    for(int i = 0; i < a; i++)
    
    {
        printf("%d ", array[i]);
    }

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a - i - 1; j++)
        {
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    printf("Sorted array: ");
    for(int i = 0; i < a; i++)
    {
        printf("%d ", array[i]);
    }

}