// 4. WAP that accepts the temperature in Centigrade and converts into Fahrenheit using the formula C/5=(F-32)/9
#include <stdio.h>
int main()
{

    float centigrade, fahrenheit;

    // taking user input
    printf("Enter the temperature in centigrade:");
    scanf("%f", &centigrade);


    //conversion to fahrenheit
    fahrenheit = (9 * centigrade) / 5 + 32;

    //printing value
    printf("Temperature in fahrenheit is:%0.2f", fahrenheit);
    return 0;
}