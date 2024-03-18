//stuct function to find the name roll marks and grade of a student

#include <stdio.h>
#include <math.h>



struct student
{
    char name[50];
    int roll;
    float marks;
    char grade;
    float percentage;
};


int main(void)
{
    struct student fe1;
    fe1.roll = 1;
    strcpy(fe1.name, "Anushrut");
    fe1.marks = 84;
    fe1.grade = 'A';
    fe1.percentage = 99.5;

    printf("Name: %s\n", fe1.name);
    printf("Roll: %d\n", fe1.roll);
    printf("Marks: %f\n", fe1.marks);
    printf("Percentage: %f\n", fe1.percentage);
    printf("Grade: %c\n", fe1.grade);

    return 0;
}