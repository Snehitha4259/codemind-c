#include<stdio.h>
int main()
{
    int n,max;
    scanf("%d",&n);
    int i,ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    max=ar[0];
    for(i=1;i<n;i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
        }
    }
    printf("%d",max);
}