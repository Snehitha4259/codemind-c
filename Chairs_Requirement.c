#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int res=x-y;
    if(x>=y){
        printf("%d",res);
    }
    else{
        printf("0");
    }
}