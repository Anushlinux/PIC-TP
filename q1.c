#include <stdlib.h>
#include <stdio.h>

int max(int arr[], int n)
{
    int max = 0;
    int i = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}


int main()
{
    int n;
    printf("Enter the num of arr: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the arr: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", max(arr, n));

    return 0;
}