#include<stdio.h>
void main()
{
    int m=1;
    float d=0.5;
    while(1)
    {
      printf("Minute %d : Distance covered = %0.1f km\n",m,d);
      if(d>=10)
        break;
      m++;
      d+=0.5;
    }
    printf("Marathon complete!");
}
