#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int sum = 0, rem;
    printf("enter the num: ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    printf("the sum is: %d", sum);


}