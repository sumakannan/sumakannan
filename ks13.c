#include<stdio.h>
int main(void)
{
	int n,flag=0,i;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
