#include<stdio.h>
void main()
{ int n,og,rem,sum; //n=number;og=original;rem=reminder;
    printf(" 1-500 armstrong numbers: \n");
    for(n=1;n<=500;n++)
    {
        og=n;
        sum=0;
        while(og!=0)
    {
       rem=og%10;
       sum+=rem*rem*rem;
       og/=10;
    }
    if(sum==n)
       { printf("%d \n",n);
       }
    }
}
