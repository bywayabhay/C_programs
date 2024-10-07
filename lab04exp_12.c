// 12.WAP to print the sum of all numbers up to a given number
#include <stdio.h>

// recursive approach
int nSum(int x)
{
    if (x == 0)
        return 0;
    else
        return x + nSum(x - 1);
}

int main()
{
    int num, num2;
    int sum = 0;

    // taking user input
    printf("Enter a natural number:");
    scanf("%d", &num);

    // printf("%d", nSum(num));
    num2 = num; // Why? --> as I'm printing num in result but if i decrement num in while loop it results to 0

    // iterative approach
    while (num2 > 0)
    {
        sum += num2;
        num2--;
    }
    printf("The sum of first %d natural numbers is: %d", num, sum);

    return 0;
}