#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int res=x*4;
    if(res<=1000){
        printf("YES");
    }
    else{
        printf("NO");
    }
}