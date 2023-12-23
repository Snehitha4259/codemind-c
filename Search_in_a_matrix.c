#include<stdio.h>
int main()
{
    int r1,c1,i,j,flag=0;
    scanf("%d%d",&r1,&c1);
    int m[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&m[i][j]);}
    }
    int s;
    scanf("%d",&s);
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            if(s==m[i][j]){
                flag=1;
            }
        }
    }
    if(flag==1) printf("1");
    else printf("0");
}