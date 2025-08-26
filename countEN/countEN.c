#include<stdio.h>
void main()
{ int n;
    char ch;
    int nn=0,pn=0,z=0;
    do{
        printf("Enter n:");
        scanf("%d",&n);
       if(n<0)
       nn++;
       else if(n>0)
       pn++;
       else
       z++;
    printf("Want to print another number? (enter y for yes and n for no): ");
    scanf(" %c",&ch);
    }
    while(ch=='y' || ch=='Y');

    printf("\nTotal count of Positive Numbers: %d",pn);
    printf("\nTotal count of Negative Numbers: %d",nn);
    printf("\nTotal count of Zero entered: %d",z);
}
