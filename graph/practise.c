#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    system("cls");
    printf("The size of array: ");
    scanf("%d", &a);
    int array[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the elemets: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Array: ");
    for (int i = 0; i < a; i++ )
    {
        printf("%d", array[i]);
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
                printf("\n");
            }
        }
    }
    printf("The sorted array is: ");
        for (int i = 0; i < a; i++)
        {
            printf("%d", array[i]);
        }
}

