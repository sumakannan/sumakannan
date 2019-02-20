#include <stdio.h>

int main(void) {
	int n,c,i,j;
	long int a[40],max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		if(c==1)
		{
			max=a[i];
		}
	}
	printf("%ld",max);
	return 0;
}
