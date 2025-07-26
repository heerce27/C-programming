#include<stdio.h>
void main()
{
    int m;
    printf("Enter your marks: ");
    scanf("%d",&m);
    if(m>=0 && m<=30)
        printf("Grade:C");
    else if(m>30 && m<=70)
        printf("Grade:B");
    else if(m>70 && m<90)
        printf("Grade:A");
    else
        printf("Grade:A+");

}
