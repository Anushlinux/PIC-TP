#include <stdio.h>

int main() {
    
    int score;
    printf("Enter the score : ");
    scanf("%d", &score);

    
    char grade;

    switch (score / 10) {
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    
    if (score >= 50 && score <= 59) {
        grade = 'E';
    }

   
    printf("The grade is: %c\n", grade);

    return 0;
}
