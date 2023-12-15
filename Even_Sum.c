#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   int ar[n],sum=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0) sum=sum+ar[i];
    }
    printf("%d",sum);
    
}