#include<stdio.h>
int main(void)
{
	int n,k,i,pow=1;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		pow=pow*n;
	}
	printf("%d",pow);
	return 0;
}
