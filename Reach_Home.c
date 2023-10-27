#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int res=(5*x);
    if(res>=y){
        printf("YES");
    }
    else{
        printf("NO");
    }
}