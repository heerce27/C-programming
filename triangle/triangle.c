#include<stdio.h>
void main()
{
 int a,b,c;
scanf("%d %d %d",&a, &b, &c);
if(a+b>c && b+c>a && a+c>b)
{ if(a==b && b==c)
  printf("Equilateral Triangle");
 else if( (a*a + b*b == c*c) || (b*b + c*c== a*a) || (a*a + c*c== b*b) )
  printf("Right-angle Triangle");
   else if( a==b || b==c || a==c)
  printf("Isosceles Triangle");
   else
  printf("Scalene Triangle");

   }
else
  printf("Triangle is not possible");
}
