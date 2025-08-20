#include<stdio.h>
void main()
{
     float m,w,pm,pw;
    float  tp=1441981744;
    pw=0.484;
    w=pw*tp;
    m=tp-w;
    printf("Total population: %f",tp);
    printf("\nNumber of women: %f",w);
    printf("\nNumber of men: %f",m);
    float lit,mlit,wlit;
    lit=0.8595*tp;
    mlit=0.8095*m;
    wlit=0.6284*w;
    printf("\n\nTotal literate people: %f",lit);
    printf("\nNmuber of Men literate: %f",mlit);
    printf("\nNumber of women literate: %f",wlit);
    float gap=mlit-wlit;
    printf("\n\nGap between male and female literate: %f",gap);
    float ilt=tp-lit;
    printf("\n\nIliterate people: %f",ilt);

}

