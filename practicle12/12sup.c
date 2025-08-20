#include<stdio.h>
void main()
{ int s,e,se; //s=start,e=end,se=special edition
    printf("Enter ID number \nstart:");
    scanf("%d",&s);
    printf("End:");
    scanf("%d",&e);
    printf("Enter which books will be special edition.\nEvery :");
    scanf("%d",&se);

    for(int i=s;i<=e;i++)
    {
        if(i%se==0)
            printf("Book ID: %d Special edition\n",i);
        else if(i%4==0)
            printf("Book ID: %d Rare edition\n",i);
        else
            printf("Book ID: %d\n",i);
    }
}
