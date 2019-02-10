#include <stdio.h>

int main(void) {
	long int n,i,sum;
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	sum=sum+i;
	printf("%d",sum);
	return 0;
}
