#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float res,s=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        res=sqrt(i);
        s=s+res;
    }
    
    printf("%.2f",s);
}