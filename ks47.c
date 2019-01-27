#include <stdio.h>

int main(void) {
	int a[20],n,i,max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d %d",min,max);
	return 0;
}
