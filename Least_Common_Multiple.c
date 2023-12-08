#include<stdio.h>
int main()
{
    int a,b,i,res;
    scanf("%d%d",&a,&b);
    for(i=1;i>0;i++)
    {
        res=b*i;
        if(res%a==0)
        {
            printf("%d",res);
            break;
        }
    }
}