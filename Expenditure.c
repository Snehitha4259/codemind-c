#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    int res=Y*30;
    if(res<=X){
        printf("YES");
    }
    else{
        printf("NO");
    }
}