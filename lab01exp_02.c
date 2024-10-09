// 2. WAP that calculate the simple interest and compound interest. The principal amount, rate of interest and time are entered through the keyboard
#include <stdio.h>
#include <math.h>
int main()
{
    float simpleInterest, compoundInterrest, principal, amount, interestRate, time;

    // taking user input
    printf("Enter amount:");
    scanf("%f", &principal);
    printf("Enter interest rate (in percentage):");
    scanf("%f", &interestRate);
    printf("Enter time in years:");
    scanf("%f", &time);

    // calculating SI and CI
    simpleInterest = (principal * interestRate * time) / 100;
    amount = principal * ((pow((1 + interestRate / 100), time)));
    compoundInterrest = amount - principal;

    // printing SI
    printf("Simple interest is: %f after %f years\n", simpleInterest, time);
    printf("Compound interest is: %f after %f years", compoundInterrest, time);
    return 0;
}