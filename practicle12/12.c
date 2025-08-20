#include<stdio.h>
void main()
{
    for(int i=1;i<=50;i++)
    {
        if(i%5==0)
            printf("Book ID: %d Special edition\n",i);
        else
            printf("Book ID: %d\n",i);
    }
}
