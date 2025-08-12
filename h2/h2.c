//to find factorial
#include<stdio.h>
void main()
{
    int n;
    long fact;
    printf("Enter the number to find factorial: ");
    scanf("%d",&n);
    fact=1;
    if(n<0){
            printf("Factorial of a negative number is not defined.\n");
    }
    else{
    for(int i=1; i<=n; i++)
    {
        fact=i*fact;
    }
    printf("\nFactorial= %ld",fact);
}
}
