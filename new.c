#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n;
    int sum = 0;
    printf("enter the num: ");
    scanf("%d", &n);

    while(n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;

}