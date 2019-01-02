#include<stdio.h>
int main(void)
{
	int n,sum=0,rem,m;
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==m)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
