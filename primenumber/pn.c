#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<=0)
    printf("Invalid");
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
        printf(" not prime.");
        break;}
        else
            printf("prime.");
        break;

    }
}
