#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
   int ar[n],esum=0,osum=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0) esum=esum+ar[i];
        else osum=osum+ar[i];
    }
    int diff=abs(esum-osum);
    printf("%d",diff);
}