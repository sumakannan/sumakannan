#include <stdio.h>

int main(void) {
	int a,d,n,i,sum=0;
	scanf("%d%d%d",&a,&d,&n);
	for(i=0;i<n;i++)
	{
		sum=sum+a;
		a=a+d;
	}
	printf("%d",sum);
	return 0;
}
