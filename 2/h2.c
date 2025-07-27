//aggregate marks and percentage
#include<stdio.h>
void main()
{
    float p;
    int m1,m2,m3,m4,m5;
    printf("Enter Your 5 sub marks: ");
    printf("\nMaths:");
    scanf("%d",&m1);
    printf("\nPhysics:");
    scanf("%d",&m2);
    printf("\nChemistry:");
    scanf("%d",&m3);
    printf("\nEnglish:");
    scanf("%d",&m4);
    printf("\nComputer:");
    scanf("%d",&m5);
    int sum=m1+m2+m3+m4+m5;
    printf("\nTotal marks:%d",sum);
    p=sum/5;
    printf("\nPercentage of student: %f",p);
    if(p<33)
    {
        printf("Student is fail.");
    }
    else
    {
        printf("\nStudent is pass");
    }
}
