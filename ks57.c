#include <stdio.h>

int main(void) {
	int n,k,a[30],i,c=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		c++;
	}
	printf("%d",c);
	return 0;
}
