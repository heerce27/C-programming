#include<stdio.h>
void main()
{
    double pa,pb;
    printf("Enter your percentage of A and B subjects:");
    scanf("%lf %lf",&pa,&pb);
    if(pa>=55 && pb>=45)
        printf("Qualified");
    else if(pa<55 && pa>=45 && pb>=55)
        printf("Qualified");
    else if(pb<45 && pa>=65)
        printf("Qualified to reappear in an examination in B to qualify.");
    else
        printf("fail");
}
