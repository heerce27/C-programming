/*#include<stdio.h>
void main()
{
    int n,d,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    int og=n;
    while(n!=0)
    {
        d=n%10;
        sum+=d*d*d;
        n/=10;
    }
    printf("Sum of cube of digits: %d",sum);
    if(sum==og)
    printf("\nArmstrong number");

    for(n=1;n<=N;n++)
    {   og=N;
        d=n%10;
        sum+=d*d*d;
        n/=10;
    if(sum==og)
        printf("%d ",i);
    }
    */
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n, result;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for(num = 1; num <= 500; num++) {
        original = num;
        result = 0;

        // Find number of digits
        n = 0;
        int temp = num;
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        // Calculate sum of digits^n
        temp = num;
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        if (result == original) {
            printf("%d\n", num);
        }
    }
    return 0;


}


