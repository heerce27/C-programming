//Sum of natural numbers and printing them
#include<stdio.h>
void main()
{
    int sum,n;
    printf("Enter  number: ");
    scanf("%d",&n);
    sum=0;
    for(int j=n; j>=1;  j--)
    {
        printf("\n%d",j);
        sum=sum+j;
    }
    printf("\nSum of %d natural number: %d",n,sum);




}
