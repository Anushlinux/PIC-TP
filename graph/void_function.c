#include <stdio.h>

void factorial(void);
int main (void)
{
    factorial();
}

void factorial(void)
{
    int num = 12;
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact*i;
        
    }
}