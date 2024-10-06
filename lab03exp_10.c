// 10.WAP that accepts marks of five subjects and finds percentage and prints grades according to the following criteria:
//  Between 90-100%--------------Print ‘A’
//  80-90%----------------------------Print ‘B’
//  60-80%---------------------------Print ‘C’
//  Below 60%----------------------Print ‘D’
#include <stdio.h>
int main()
{
    int phy, maths, chem, eng, hindi;
    float sum = 0; // It is not necessary to assign it to 0 (for new comopilers) same for percentage, totalMarks
    float percentage = 0;
    float totalMarks = 500;
    // taking marks by user
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

    // calculating sum
    sum = phy + maths + chem + eng + hindi;

    // calculating percentage
    percentage = (sum / totalMarks) * 100;

    // defining criteria and printing grades at same time
    if (percentage <= 100 && percentage >= 90)
        printf("Your grade is: A");
    if (percentage < 90 && percentage >= 80)
        printf("Your grade is: B");
    if (percentage >= 60 && percentage < 80)
        printf("Your grade is: C");
    if (percentage < 60)
        printf("Your grade is: D");
    return 0;
}
