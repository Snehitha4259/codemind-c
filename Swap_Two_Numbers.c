#include<stdio.h>
int main()
{
    int a,b,T;
    scanf("%d%d",&a,&b);
    T=b;
    b=a;
    a=T;
    printf("%d
%d",a,b);
}