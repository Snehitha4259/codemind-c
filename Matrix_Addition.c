#include<stdio.h>
int main()
{
    int r1,c1,i,j;
    scanf("%d%d",&r1,&c1);
    int m[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&m[i][j]);
        }
    }
    int r2,c2;
    scanf("%d%d",&r2,&c2);
    int n[r2][c2];
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&n[i][j]);
        }
    }
    if(r1==r2 && c1==c2){
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
        printf("%d ",m[i][j]+n[i][j]);
        }
        printf("
");
    }
    }
}