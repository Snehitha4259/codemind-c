#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    int profit=Y-X;
    float per=(profit*100.0)/X;
    printf("%.2f",per);
}