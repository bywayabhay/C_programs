// 8.WAP that finds whether a given number is even or odd
#include <stdio.h>
int main()
{
    int num;

    // taking inputer by user
    printf("Enter a number:");
    scanf("%d", &num);

    //checking even or odd and printing at the same time
    if(num % 2 == 0)
    printf("EVEN number");
    else
    printf("ODD number");

    return 0;
}