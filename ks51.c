#include <stdio.h>

int main(void) {
	int n,a=1,num,rem;
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		a=a*10;
		n=n/10;
	}
	a=a/10;
	while(num!=0)
	{
		rem=num/a;
		printf("%d ",rem);
		num=num%a;
		a=a/10;
	}
	return 0;
}
