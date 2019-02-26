#include <stdio.h>

int main(void) {
	int n,i,s=1,flag=0;
	scanf("%d",&n);
	if(n%2==0)
	{
			for(i=0;i<=n/2;i++)
			{
				if(n==s)
				{
					flag=1;
					break;
				}
				s=s*2;
			}

	}
	else
	{
		flag=0;
	}
	if(flag==0)
	{
		printf("no");
	}
	else 
	{
		printf("yes");
	}
	return 0;
}
