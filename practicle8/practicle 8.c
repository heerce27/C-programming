#include<stdio.h>
void main()
{
    int a;
    printf("Enter your age:");
    scanf("%d",&a);
    if(a<18 && a>0){
            printf("You are not eligible to open a saving account.");
    }
    else if(a>=18 && a<59){
        printf("you are eligible for regular savings account.");
    }
    else if(a>59 && a<128)
    {
        printf("you are eligible for senior citizen account.");
    }
    else
    {
        printf("Invalid age");
    }
}
