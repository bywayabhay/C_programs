// 7.WAP to find the greatest of three numbers
#include <stdio.h>
int main()
{
    int num1, num2, num3;

    // taking inputer by user
    printf("Enter a (integer):");
    scanf("%d", &num1);
    printf("Enter b (integer):");
    scanf("%d", &num2);
    printf("Enter c (integer):");
    scanf("%d", &num3);

    // checking greatest of three
    if (num1 > num2 && num1 > num3)
        printf("%d is greatest of all", num1);
    if(num2 > num3)
        printf("%d is greatest of all", num2);
    else 
        printf("%d is greatest of all", num3);

    return 0;
}
