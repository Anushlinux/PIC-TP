#include<stdio.h>
#include<stdlib.h>

int sort(int arr[], int size)
{
    int i, j = 0;

    for (i = 0; i < size; i++)
    {
        for(j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

int main()
{
    int arr1[5] = {1 ,2, 3, 65, 3};
    int arr2[5] = {3,1,5,2,3};
    
    int arr3[10];
    for(int i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i];
    }
    for(int i = 5; i < 10; i++)
    {
        arr3[i] = arr1[i - 5];
    }

    sort(arr3, 10);

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr3[i]);
    }

}