#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    int loss=X-Y;
    float per=(loss*100.0)/X;
    printf("%.2f",per);
}