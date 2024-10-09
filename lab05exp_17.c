// 17.WAP to find the sum of digits of the entered number
#include <stdio.h>
int main()
{
    int num, i, sum = 0, rem = 0;

    // taking number input
    printf("Enter a number:");
    scanf("%d", &num);

    // calculting digit sum
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        sum += rem;
    }

    // printing sum
    printf("Sum of digits:%d", sum);
    return 0;
}