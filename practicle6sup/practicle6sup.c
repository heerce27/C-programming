#include<stdio.h>
void main()
{
    float tc, tf,tk;
    int ch;
    printf("Enter 1 to convert celsius to fahrenheit.");
    printf("\nEnter 2 to convert fahrenheit to celsius.");
    printf("\nEnter 3 to convert celsius to kelvin.");
    printf("\nEnter 4 to convert kelvin to celsius.");
    printf("\nEnter 5 to convert kelvin to fahrenheit.");
    printf("\nEnter 6 to convert fahrenheit to kelvin.");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch (ch) {
    case 1:
        printf("Enter temperature in celsius: ");
        scanf("%f", &tc);
    tf = (tc * 9)/5 + 32;
    printf("Temperature in fahrenheit: %f",tf);
    break;
    case 2:
        printf("Enter temperature in fahrenheit: ");
        scanf("%f", &tf);
        tc= (tf-32)*5/9;
        printf("Temperature in celsius: %f",tc);
        break;
    case 3:
        printf("Enter temperature in celsius: ");
        scanf("%f", &tc);
        tk=tc+273.15;;
        printf("Temperature in kelvin: %f ",tk);
        break;
    case 4:
        printf("Enter temperature in kelvin: ");
        scanf("%f", &tk);
        tc=tk-273.15;
        printf("Temperature in celsius: %f",tc);
        break;
     case 5:
        printf("Enter temperature in kelvin: ");
        scanf("%f", &tk);
        tf=(( tk- 273.15) * 1.8) + 32;
        printf("Temperature in fahrenheit: %f",tf);
        break;
    case 6:
        printf("Enter temperature in fahrenheit: ");
        scanf("%f", &tf);
        tk=(tf - 32) / 1.8 + 273.15;
        printf("Temperature in kelvin: %f",tk);
        break;
    default:
        printf("Invalid choice.");
    }
}
