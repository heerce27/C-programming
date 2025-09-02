#include<stdio.h>
void main()
{
    int camt,wd,ch;
    camt=5000;
    printf("Welcome to national bank of Bharat");
    printf("\nYour current balance: %d",camt);
    ch=1;
    while(ch==1)
    {
        printf("\nEnter amount to withdraw(0 to exit):");
        scanf("%d",&wd);
        if(wd==0){
       printf("\nThank you.");
       break;
        }
        else if(wd>camt)
        {
            printf("\nInsufficiant balance.");
            break;
        }
        else
        {
            camt-=wd;
            printf("\nRemaining amount: %d",camt);
        }

    }
    }

