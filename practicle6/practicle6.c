#include<stdio.h>
void main()
{
    float tc, tf;
    printf("Enter temperature in celsius: ");
    scanf("%f", &tc);
    tf = (tc * 9)/5 + 32;
    printf("Temperature in fahrenheit: %f", tf);
}
