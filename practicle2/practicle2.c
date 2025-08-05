#include <stdio.h>
void main()
{
    float a, b, peri, area;

    printf("Enter length: ");
    scanf("%f", &a);
    printf("Enter breadth: ");
    scanf("%f", &b);

    peri = 2 * (a + b);
    printf("\nPerimeter: %f", peri);

    area = a * b;
    printf("\nArea: %f", area);

    float rate1, cost1;
    printf("\n\nEnter rate for fencing per meter: ");
    scanf("%f", &rate1);
    cost1 = rate1 * peri;
    printf("The cost for fencing: %f", cost1);

    float rate2, cost2;
    printf("\n\nEnter rate for grassing per meter: ");
    scanf("%f", &rate2);
    cost2 = rate2 * area;
    printf("The cost for grassing: %f", cost2);
}


