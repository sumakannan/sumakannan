#include <stdio.h>

int main(void) {
	long int n,rem,sum=0;
	scanf("%ld",&n);
	while(n)
	{
		rem=n%10;
		sum=sum+rem*rem;
		n=n/10;
	}
	printf("%ld",sum);
	return 0;
}
