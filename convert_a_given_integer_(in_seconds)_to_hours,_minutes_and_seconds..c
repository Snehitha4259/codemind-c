#include<stdio.h>
int main()
{
    int n,H,M,S,r;
    scanf("%d",&n);
    H=n/3600;
    r=n%3600;
    M=r/60;
    S=r%60;
    printf("H:M:S-%d:%d:%d",H,M,S);
    
}