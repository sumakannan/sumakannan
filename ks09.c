#include<stdio.h>
int main(void)
{
	int a[20],n,k,i,sum=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<k;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
