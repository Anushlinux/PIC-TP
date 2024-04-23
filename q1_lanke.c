#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int m;

    printf("the num of arr: ");
    scanf("%d", &n);

    int arr[n];

    printf("the nums: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("the num to delete: ");
    scanf("%d", &m);

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != m)
        {
            printf("num not found");
        }
        else
        {
            
        }
    }
}
