#include<stdio.h>
int main()
{
    int i,n,p=1;
    scanf("%d%d",&n);
    for(i=1;i<=12;i++)
    {
        p=n*i;
        printf("%d x %d = %d
",n,i,p);
    }
}