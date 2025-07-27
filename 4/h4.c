//to print table
#include<stdio.h>
void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1; i<=10; i++)
    {
        printf("\n%d",n*i);
    }
}
