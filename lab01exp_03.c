//	3.	WAP to calculate the area and circumference of a circle
#include <stdio.h>
#define PI 3.14159265358979323846
int main()
{
    float areaOfCircle, circumference, radius;

    // taking user input
    printf("Enter radis of circle:");
    scanf("%f", &radius);

    // claculating circumference and area of circle
    circumference = (2 * PI * radius);
    areaOfCircle = (PI * radius * radius);

    // printing SI
    printf("Area of circle is: %0.2f\nCircumference is:%0.2f", areaOfCircle, circumference);

    return 0;
}