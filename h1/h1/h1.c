//Write a program to print whether the given number is between 1 to 100, 101 to 500, 501 to 999 or greater (1000) using conditional operator.
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    num<=100 && num>=1 ? printf("Number is between 1-100") :
            num<=500 && num>100 ? printf("Number is between 100-500") :
            num<=1000 && num>500 ? printf("Number is between 500-1000"):
            num<0 ? printf("Number is negative"):
            num>1000 ? printf("Number is greater than 1000."):
            printf("Invalid number");
}
