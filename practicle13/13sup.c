#include<stdio.h>
#include<unistd.h>
void main()
{   int r,tc;
    double tp;//r=refill,tc=tank capacity
    printf("Enter Tank capacity:");
    scanf("%d",&tc);
    printf("Enter Refill rate:");
    scanf("%d",&r);
    for(int i=0;i<=tc;i+=r)
    {       tp=100*i/tc;
            printf("Current water level: %d Tank is %lf %% full\n",i,tp);
            sleep(1);
            if(i==tc)
            printf("Tank is full.",i);
}
}
