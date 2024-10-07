// 14.WAP to print sum of even and odd numbers from 1 to N numbers
#include <stdio.h>
int main()
{
    int num, sum1 = 0, sum2 = 0;

    // taking user input
    printf("Enter natural number:");
    scanf("%d", &num);

    // calculating sum of even and odd numbers simultaneously
    while (num != 0)
    {
        if (num % 2 == 0)
            sum1 += num;
        if (num % 2 != 0)
            sum2 += num;
        num--;
    }
    printf("Sum of odd:%d\nSum of even:%d", sum2, sum1);

    return 0;
}