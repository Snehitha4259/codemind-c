#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=1;i>0;i++)
    {
        int res=b*i;
        if(res%a==0){
            printf("%d",res);
            break;
        }
    }
    
}