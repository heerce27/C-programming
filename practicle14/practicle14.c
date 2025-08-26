#include<stdio.h>
void main()
{
    int wd,ramt,samt;
    samt=5000;
    int ct=1;//ct=continue transaction
    while(ct==1){
    printf("\nCurrent balance: %d",samt);
    printf("\nEnter the amount you want to withdraw(or 0 to exit) :");
    scanf("%d",&wd);
    if(wd==0){
        printf("Thank you for using ATM. \nHave a great Day.");
        break;
    } else if(wd>samt)
    {
        printf("Insufficiant balance.");
    }else{
    ramt=samt-wd;
    printf("Remaining balance: %d",ramt);
    }
    }
}
