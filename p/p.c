//patterns
#include<stdio.h>
void main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
  /*

  ***
  **
  *
  for(int i=1;i<=n;i++)
  {
    for(int j=n; j>=i; j--)
    {
        printf("*");
    } printf("\n");
  }


       /*
      **
     ***
  for(int i=1;i<=n;i++)
  {
    for(int j=0; j<n-i; j++)
    {
        printf(" ");
    }
    for(int k=1; k<=i ; k++)
    {
        printf("*");
    }printf("\n");
  }


   /*
 *   *
*  *   *


for(int i=1;i<=n;i++)
  {
    for(int j=0; j<n-i; j++)
    {
        printf(" ");
    }
    for(int k=1; k<=i ; k++)
    {
        printf("%d ",k);
    }printf("\n");
  }

  /***
   **
    *
int c,d,e;
    for( c=1; c<=n; c++)
    {
       for(d=1; d<=c; c++)
       {
        printf(" ");
       }
       for( e=n; e>=d; e--)
       {
        printf("*");
       } printf("\n");
    }
    /*******
    *** ***
    **   **
    *     *
*
    int a,b;
    for(a=n; a>=1;a--)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        for(b=1;b<=2*(n-a);b++)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }

   /*     *
    **   **
    *** ***
    *******

    */

    int i,j,k;
    for(i=1; i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<=2*(n-i);j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
  }



