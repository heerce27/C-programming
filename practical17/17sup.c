#include<stdio.h>
void main()
{
    int m;
    float d,td,dpm;
    printf("Enter total distance of marathon: ");
    scanf("%f",&td);
    printf("Enter the distance covered per minute dynamically : ");
    scanf("%f",&dpm);
    while(1)
    {
      sleep(1);
      printf("Minute %d : Distance covered = %0.1f km\n",m,d);
      if(d==td)
        break;
      m++;
      d+=dpm;
    }
        printf("Total Minutes taken: %d\n",m);
        printf("Marathon complete!");
}
