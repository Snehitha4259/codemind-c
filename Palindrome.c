#include<stdio.h>
int main()
{
	int n,r,rev=0;
	scanf("%d",&n);
	int t=n;
	while(t!=0){
		r=t%10;
		rev=rev*10+r;
		t=t/10;
	}
	if(rev==n) printf("Palindrome");
	else printf("Not Palindrome");
}