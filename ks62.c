#include <stdio.h>

int main(void) {
	long int n,flag=0;
	scanf("%ld",&n);
	while(n)
	{
		if(n%2!=0&&n%2!=1)
		flag=1;
		n=n/10;
		
		
	}
	if(flag==1)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	
	return 0;
}
