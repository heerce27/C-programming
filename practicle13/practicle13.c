#include<stdio.h>
#include<unistd.h>
void main()
{
    for(int i=0;i<=100;i+=10)
    {
            printf("Current water level: %d\n",i);
            sleep(1);
            if(i==100)
            printf("Tank is full.",i);
    }
}
