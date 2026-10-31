#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
    char grade;
};

int main()
{
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Enter grade: ");
    scanf(" %c", &s.grade);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
    printf("Grade: %c\n", s.grade);

    return 0;
}