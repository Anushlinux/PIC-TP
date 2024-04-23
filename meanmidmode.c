#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int n)
{
    int i, j , temp;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
        }
    }
    return;
}

float mode(int n, int arr[])
{
    int max = 0, count = 1;
    int i;
    for(i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i+1])
        {
            count++;
        }
        else
        {
            if(count > max)
            {
                max = count;
            }
            count = 1;
        }
    }
    if (count > max)
    {
        max = count;
    }
    return arr[i];
}

float mean(int arr[], int n)
{
    int i;
    int sum = 0;
    for(i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (float)sum / n;
}

float median(int arr[], int n)
{
    if (n % 2 == 0)
    {
        return(float)(arr[n/2] + arr[n/2 - 1])/2;
    }
    else
    {
        return(float)(arr[n/2]);
    }
}

int main ()
{
    int n;
    printf("Enter the arr: ");
    scanf("%d", &n);

    int arr[n];
    int i;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sortArray(arr, n);

    printf("Mean: %.2f\n", mean(arr, n));
    printf("Median: %.2f\n", median(arr, n));
    printf("Mode: %.2f\n", mode(arr, n));

    return 0;
}