// 18.WAP to find the reverse of a number
#include <stdio.h>

int main()
{
    int num, rem = 0, qt = 0;

    // input a number
    printf("Enter a number:");
    scanf("%d", &num);

    // reversing a number
    for (int i = 0; i < num; i++)
    {
        rem = num % 10;
        qt = qt * 10 + rem;
        num = num / 10;
    }

    // printing reverse number
    printf("Reversed Number:%d", qt);
    
    return 0;
}