#include <stdio.h>

void main() {
    static int x = -2;
    x++;
    
    if (x <= 2)
    {
        printf("hi");
        main();
    }
}