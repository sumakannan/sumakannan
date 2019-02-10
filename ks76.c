#include <stdio.h>

int main(void) {
	int n,c=0,i;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%2==0)
		{
			c++;
		}
	}
	if(c>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
