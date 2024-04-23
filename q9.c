#include <stdio.h>


void factors(int num)
{
    int i;
    for(i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void digits(int num) 
{
    while (num > 0) 
    {
        int digit = num % 10;
        num = num / 10;
        printf(" %d", digit);
    }
    printf("\n");
}

int main()
{
    int num, choice;


    while(1)
    {
        printf("1. find the factor\n");
        printf("2. find the sum\n");
        printf("3. exit\n");

        printf("enter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter the num: ");
            scanf("%d", &num);        
            factors(num);
            break;

        case 2:
            printf("enter the num: ");
            scanf("%d", &num);
            digits(num);
            break;

        case 3:
            return 0;

        default:
            printf("wrong choice");    
        }


    }
    return 0;
}

// #include <stdio.h>

// void print_factors(int num) {
//     int i;
//     for (i = 1; i <= num; i++) {
//         if (num % i == 0) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
// }

// void print_digits(int num) {
//     while (num != 0) {
//         int digit = num % 10;
//         printf("%d ", digit);
//         num /= 10;
//     }
//     printf("\n");
// }

// int main() {
//     int choice, num;

//     while (1) {
//         printf("1. Print factors of a number\n");
//         printf("2. Extract and print digits of a number\n");
//         printf("3. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter a number: ");
//                 scanf("%d", &num);
//                 print_factors(num);
//                 break;
//             case 2:
//                 printf("Enter a number: ");
//                 scanf("%d", &num);
//                 print_digits(num);
//                 break;
//             case 3:
//                 return 0;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     }

//     return 0;
// }
