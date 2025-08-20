#include<stdio.h>
void main()
{
int n,sum,ldigit,fdigit;
printf("Enter 4 digit number:");
scanf("%d",&n);
if(n<1000 || n>9999)
    printf("Please enter valid four digit number.");
ldigit=n%10;
while(n>=10)
{
    n=n/10;
}
fdigit=n;
sum=fdigit+ldigit;
printf("Sum of first digit and last digit: %d",sum);
}
