#include <stdio.h>

int main(void) {
	int a[20],n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum/n);
	return 0;
}
