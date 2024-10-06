// 6.WAP that checks whether the two numbers entered by the user are equal or not
#include <stdio.h>
int main()
{
    int num1, num2;

    // taking inputer by user
    printf("Enter a (integer):");
    scanf("%d", &num1);
    printf("Enter b (integer):");
    scanf("%d", &num2);

    // to check if numbers are equal and printing at same time
    if (num1 == num2)
        printf("Both numbers are equal");
    else
        printf("Numbers are not equal");

    return 0;
}