// fibonacci series 
#include <stdio.h>

int main (){
    int a, b, c, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    a = 0;
    b = 1;
    c = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d\n", c);
            a = b;
            b = c;
            c = a + b;
        }
        
    }
    return 0;
}