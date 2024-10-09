// 13.WAP to find the factorial of a given number
#include <stdio.h>

// recursive approach
int fact(int x)
{
    if (x == 0 || x == 1)
        return 1;
    else
        return x * fact(x - 1);
}

int main()
{
    int num, num2;
    int prod = 1;

    // taking user input
    printf("Enter a whole number:");
    scanf("%d", &num);

    // printf("%d", fact(5));
    num2 = num; // Why? --> as I'm printing num in result but if I decrement num in while loop it results to 0

    // iterative approach
    while (num2 > 0)
    {
        prod *= num2;
        num2--;
    }
    printf("The factorial of %d is: %d", num, prod);

    return 0;
}