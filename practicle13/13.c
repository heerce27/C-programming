#include<stdio.h>
#include<unistd.h>
void main()
{   int r,tc;//r=refill,tc=tank capacity
    printf("Enter Tank capacity:");
    scanf("%d",&tc);
    printf("Enter Refill rate:");
    scanf("%d",&r);
    for(int i=0;i<=tc;i+=r)
    {
            printf("Current water level: %d\n",i);
            sleep(1);
            if(i==tc)
            printf("Tank is full.",i);

    }
}
