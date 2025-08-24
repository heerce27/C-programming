#include<stdio.h>
void main()
{
    double x,y;
    double ans=1;
    printf("Enter the x and y to find the value of x^y: ");
    scanf("%lf %lf",&x,&y);
    for(int i=1;i<=y;i++)
    {
     ans*=x;
    } printf(" \n%lf^%lf = %lf",x,y,ans);
}
