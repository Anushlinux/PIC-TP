#include<stdio.h>

int main()
{
    int a, b;
    system("cls");
    printf("Enter the size of the array: ");
    scanf("%d %d", &a, &b);
    int array[a][b];
    
    for (int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            printf("Enter element %d %d: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
            printf("\n");
        }
    }

    printf("Array: \n");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        printf("%d ", array[i][j]);
        printf("\n");
    }   
}