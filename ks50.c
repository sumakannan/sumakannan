#include <stdio.h>

int main(void) {
	int n,i,j,s,flag=0;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		s=1;
		for(j=1;j<=i;j++)
		{
			s=s*2;
		}
		if(s==n)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("yes");
	else
	printf("no");
	return 0;
}
