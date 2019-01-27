#include <stdio.h>

int main(void) {
	long int c=0,n;
	scanf("%ld",&n);
	while(n!=0)
	{
		c=c+1;
		n=n/10;
	}
	printf("%ld",c);
	return 0;
}
