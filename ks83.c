#include <stdio.h>

int main(void) {
	char a;
	long int n,m,s;
	scanf("%ld %c %ld",&n,&a,&m);
	if(a=='/')
	{
		s=n/m;
		printf("%ld",s);
	}
	else if(a=='%')
	{
		s=n%m;
		printf("%ld",s);
	}
	return 0;
}
