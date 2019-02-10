#include <stdio.h>

int main(void) {
	int n,i;
	scanf("%d",&n);
	for(i=n+1;i<=n+10;i++)
	{
		if(i%10==0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
