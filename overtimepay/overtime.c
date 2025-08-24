#include<stdio.h>
void main()
{ int i,h,oh; //h=hours,oh=overtime hours
    double op;//op=overtime payment
for(i=1;i<=10;i++)
{
    printf("\nEnter employee's total work hours:");
    scanf("%d",&h);
    if(h>40)
    {
        oh=h-40;
        op=oh*12;
        printf("\n%d Employee's Overtime payment: %lf",i,op);
    } else
    printf("Employee %d has not worked overtime hours.",i);
}
}
