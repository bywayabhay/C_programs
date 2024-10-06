// 9.WAP that tells whether a given year is leap year or not
#include <stdio.h>
int main()
{
    int num;

    // taking inputer by user
    printf("Enter a number:");
    scanf("%d", &num);

    //checking a leap year or not and printing at same time
    if((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0))
    printf("%d is leap a year", num);
    else
    printf("%d is not a leap year", num);

    return 0;
}