//program to reverse a number
#include<stdio.h>
void main()
{
    int n,rev;
    printf("Enter Number:");
    scanf("%d",&n);
    rev=0;
    while(n!=0){
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("Reversed Number: \n%d",rev);
}

