#include<stdio.h>
int main()
{
    int n,min;
    scanf("%d",&n);
    int i,ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    min=ar[0];
    for(i=1;i<n;i++)
    {
        if(min>ar[i])
        {
            min=ar[i];
        }
    }
    printf("%d",min);
}