#include<stdio.h>
int main()
{
	int n,flag=0;
	scanf("%d",&n);
	int ar[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	int se;
	scanf("%d",&se);
	for(i=0;i<n;i++)
	{
		if(se==ar[i]) {
			flag=1;
			break;
		}
	}
	if(flag==1) printf("True");
	else printf("False");
}