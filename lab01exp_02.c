// 2. WAP that calculate the simple interest and compound interest. The principal amount, rate of interest and time are entered through the keyboard
#include <stdio.h>
int main()
{
    float simpleInterest, amount, interestRate, time;

    //taking user input
    printf("Enter amount:");
    scanf("%f", &amount);
    printf("Enter interest rate (in percentage):");
    scanf("%f", &interestRate);
    printf("Enter time in years:");
    scanf("%f", &time);

    //calculating SI
    simpleInterest = (amount * interestRate * time) / 100;

    //printing SI
    printf("Simple interest is: %f after %f years", simpleInterest, time);
    return 0;
}