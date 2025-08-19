#include<stdio.h>
main()
{
    int m;
    printf("Enter your marks:");
    scanf("%d",&m);
    m>=90 && m<100? printf("Grade A") :
    m>=80? printf("Grade B") :
    m>=70? printf("Grade C") :
    m>=60? printf("Grade D") :
    m<60 && m>0? printf("Grade F"):
    printf("Invalid Marks.");
    }
