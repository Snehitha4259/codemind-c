#include<stdio.h>
int main()
{
    int a,b,i,res,g;
    scanf("%d%d",&a,&b);
    for(i=1;i>0;i++){
     res=b*i;
    if(res%a==0){
        res;
        break;
    }
    }
    g=(a*b)/res;
    printf("%d",g);
    
}