#include<stdio.h>
int main()
{
    int h,m,n,r;
    scanf("%d",&n);
    h=n/60;
    m=n%60;
    
    printf("%d Hour(s) %d Minute(s)",h,m);
}