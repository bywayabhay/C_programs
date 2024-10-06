// 11.WAP that takes two operands and one operator from the user and perform the operation and prints the result by using Switch statement
#include <stdio.h>
int main()
{
    int num1, num2;
    float result = 0; // It is not necessary to assign it to 0 (for new compilers) like VS Code
    char op;

    // taking inputer by user
    printf("Enter integer 1:");
    scanf("%d", &num1);
    printf("Enter integer 2:");
    scanf("%d", &num2);

    // taking operation to perform by user
    printf("Choose an operation to be performed (+ - * /): ");
    scanf(" %c", &op); // Note the space before %c to consume any leftover newline character

    // performing operation
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Division by 0 is not possible");
            return 1; // Exit the program if division by zero
        }
        else
            result = (float)num1 / (float)num2;
        break;
    default:
        printf("Choose a valid operator\n");
        return 1; // Exit the program if invalid operator
    }
    printf("%d %c %d = %0.2f\n", num1, op, num2, result);
    return 0;
}