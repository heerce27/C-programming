#include<stdio.h>
void main()
{
    float sm,na,agst;
    int rm;
    printf("Enter your total shopping amount:");
    scanf("%f",&sm);
    printf("Choose 1 for regestered member & 2 for non regestered member: ");
    scanf("%d",&rm);
    if(rm==1)
    {
        if(sm<=1000 && sm>0)
    {
        printf("No discount applied");
        printf("\nAmount to be paid: %f",sm);
        printf("\nNo GST applied.");

    }
    else if(sm>1000 && sm<=5000)
    {
       printf("\nYour total amount: %f",sm);
       na=sm-sm*0.1;
       printf("\n10%% discount is applied. \nTotal amount to be paid after discount: %f",na);
       printf("\nNo GST applied.");
   }

    else if(sm>5000)
    {
        printf("\nYour total amount: %f",sm);
        na=sm-sm*0.2;
       printf("\n20%% discount is applied. \nTotal amount to be paid after discount: %f",na);
       printf("\nNo GST applied.");


       }
    else{
    printf("Invalid amount.");
    }
}   
    else
   {
   if(sm<=1000 && sm>0)
    {
        printf("No discount applied");
        printf("\nAmount to be paid: %f",sm);
        agst=sm*0.05;
        printf("\nAmount to be paid after applying 5%% GST: %f",agst);

    }
    else if(sm>1000 && sm<=5000)
    {
       printf("\nYour total amount: %f",sm);
       na=sm-sm*0.1;
       printf("\n10%% discount is applied. \nTotal amount to be paid after discount: %f",na);
       agst=na+na*0.05;
       printf("\nAmount to be paid after applying 5%% GST: %f",agst);
    }

    else if(sm>5000)
    {
        printf("\nYour total amount: %f",sm);
        na=sm-sm*0.2;
       printf("\n20%% discount is applied. \nTotal amount to be paid after discount: %f",na);
       agst=na+na*0.05;
        printf("\nAmount to be paid after applying 5%% GST: %f",agst);

       }
    else{
    printf("Invalid amount.");
    }
   }
}
