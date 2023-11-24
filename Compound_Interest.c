#include<stdio.h>
#include<math.h>
int main()
{
    int P,R,T;
    scanf("%d%d%d",&P,&R,&T);
    float r=R/100.0;
    float ci=P*pow(1+r,T)-P;
    printf("%.2f",ci);
}