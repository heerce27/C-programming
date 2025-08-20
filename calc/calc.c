#include<stdio.h>
void main()
{
    double n1,n2;
    char op;
    printf("Enter 2 number:");
    scanf("%lf %lf",&n1,&n2);
    printf("\nEnter arithmetic operation you want to perform (+,-,*,/) : ");
    scanf(" %c",&op);
    switch(op)
    {
    case '+':
        printf("Addition of 2 numbers: %lf",n1+n2);
        break;
    case '-':
        printf("Substraction of 2 numbers: %lf",n1-n2);
        break;
    case '*':
        printf("Multiplication of 2 numbers: %lf",n1*n2);
        break;
    case '/':
        if(n2!=0)
        {
        printf("Division of 2 numbers: %lf",n1/n2);
        }
        else
            printf("invalid");
        break;
    default:
        printf("Invalid operator.");
    }
}
