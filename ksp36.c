#include <stdio.h>

int main(void) {
	long int n,i=0,b[500];
	int k,c=0,j;
	scanf("%ld",&n);
	scanf("%d",&k);
	while(n)
	{
		b[i++]=n%10;
		n=n/10;
	}
	for(j=0;j<i;j++)
	{
		if(b[j]==k)
		{
			c++;
		}
	}
	printf("%d",c);
	return 0;
}
