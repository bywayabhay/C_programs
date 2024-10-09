// 16.WAP to check whether the entered number is prime or not
#include <stdio.h>

// checking prime number
void isPrimeNumber(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 2)
        printf("%d is PRIME number", num);
    else
        printf("%d is not a PRIME number", num);
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    // calling function
    isPrimeNumber(num);
    return 0;
}