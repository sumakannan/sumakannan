#include <stdio.h>

int main(void) {
	int a,b,i,flag=0,mul,s;
	scanf("%d%d",&a,&b);
	mul=a*b;
	for(i=1;i<mul/2;i++)
	{
		s=i*i;
		if(s==mul)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1)
	printf("yes");
	else
	printf("no");

	return 0;
}
