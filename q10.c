#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows;
    int i;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++)
    {
        int j;
        for(j = i; j < i + i; j++)
        {
            printf("%d", j%2);
        }
        printf("\n");
    }
}