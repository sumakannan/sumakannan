#include <stdio.h>

int main(void) {
	long int n,n1;
	int a=1,q;
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		n=n/10;
		a=a*10;
	}
	a=a/10;
	while(n1!=0)
	{
		q=n1/a;
		if(q%2!=0)
		{
			printf("%d ",q);
		}
		n1=n1%a;
		a=a/10;
	}

	return 0;
}
