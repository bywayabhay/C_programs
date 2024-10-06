// 5.WAP that swaps values of two variables using a third variable
#include <stdio.h>
int main()
{
    int num1, num2, temp;

    //taking inputer by user
    printf("Enter a (integer):");
    scanf("%d", &num1);
    printf("Enter b (integer):");
    scanf("%d", &num2);

    //printing values before swapping
    printf("The values of a and b (before swapping):%d %d\n", num1, num2);

    //swapping numbers
    temp = num1;
    num1 = num2;
    num2 = temp;

    //printing values after swapping
    printf("The values of a and b (after swapping):%d %d", num1, num2);


    return 0;
}