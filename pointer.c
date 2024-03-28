#include <stdio.h>

main ()
{
    int x = 15;
    int *y;
    y = &x;
    
    printf("The value of x is %d\n", y);

    printf("The address of x is %p\n", &x + 1);
    printf("The address of x is %p\n", y);
}
