#include<stdio.h>
int main()
{
    int n,r,l,sum;
    scanf("%d",&n);
    int a=n%10;
    while(n!=0){
        r=n%10;
        l=r;
        n=n/10;
    }
    sum=a+l;
    printf("%d",sum);
}