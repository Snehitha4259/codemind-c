#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    int r=x1+y1;
    int s=x2+y2;
    if(r>s){
        printf("%d",s);
    }
    else{
        printf("%d",r);
    }
}