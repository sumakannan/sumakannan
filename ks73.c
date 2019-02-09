#include <stdio.h>

int main(void) {
	long int a,b,n;
	scanf("%ld",&n);
	scanf("%ld%ld",&a,&b);
	if(n>a&&n<b)
		printf("yes");
	else
		printf("no");
	return 0;
}
