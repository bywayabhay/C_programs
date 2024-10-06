// 1. WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained by the student
#include <stdio.h>
int main()
{
    int phy, maths, chem, eng, hindi;
    float sum = 0; // It is not necessary to assign it to 0 (for new comopilers) same for percentage, totalMarks
    float percentage = 0;
    float totalMarks = 500;
    //taking marks by user
    printf("Enter the marks of Physics:");
    scanf("%d", &phy);
    printf("Enter the marks of Mathematics:");
    scanf("%d", &maths);
    printf("Enter the marks of Chemistry:");
    scanf("%d", &chem);
    printf("Enter the marks of English:");
    scanf("%d", &eng);
    printf("Enter the marks of Hindi:");
    scanf("%d", &hindi);

    //calculating sum
    sum = phy + maths + chem + eng + hindi;

    //printing total marks
    printf("You've got total %0.2f marks", sum);

    //calculating percentage
    percentage = (sum / totalMarks) * 100;

    //printing percentage
    printf("\nYou've got %0.2f%%", percentage);
    return 0;
}