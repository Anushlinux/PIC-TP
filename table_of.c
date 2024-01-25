// table of 5 by for loop
#include <stdio.h>

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    
    for (int i = 1; i <=10; i++){
        printf("%d * %d = %d\n", a,i,(i*a));
    }

    return 0;
}