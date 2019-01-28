#include <stdio.h>

int main(void) {
	int n1,n2,gcd,a;
	scanf("%d%d",&n1,&n2);
	while(n2)
	{
		a=n2;
		n2=n1%n2;
		n1=a;
		
	}
	gcd=n1;
	printf("%d",gcd);
	return 0;
}
