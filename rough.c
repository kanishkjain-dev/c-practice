#include <stdio.h>

int main()
{
    int eng, hin, mat, sst, sci;

    printf("enter marks of ur 5 subjects: ");
    scanf("%i%i%i%i%i", &eng, &hin, &mat, &sst, &sci);

    int total_marks = eng + hin + mat + sst + sci;
    float percent = (total_marks/500.00) * 100;

    printf("total marks = %i\npercentage = %.2f", total_marks, percent);
    return 0;
}