#include<stdio.h>
int main()
{
    int i,n,a,p=1;
    scanf("%d%d",&n,&a);
    for(i=1;i<=a;i++)
    {
        p=n*i;
        printf("%d x %d = %d
",n,i,p);
    }
}