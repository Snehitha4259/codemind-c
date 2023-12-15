#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],sum=0,i;
    float avg;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    avg=(float) sum/n;
    printf("%.2f",avg);
}