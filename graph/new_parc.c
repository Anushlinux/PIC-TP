#include<stdio.h>
#include<math.h>

int main ()
{
    int a,b;
    printf("Enter the size of array: ");
    scanf("%d %d", &a, &b);
    int array[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter eh elemtsn %d %d: ", i+1, j+1);
            scanf("%d", array[i][j]);
            printf("\n");

        }
    }

    printf("The aray is: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        printf("%d ", &array[i][j]);
        printf("\n");
         
    }
}    