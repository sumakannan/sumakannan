#include <stdio.h>

int main(void) {
	int a,b,i;
	scanf("%d%d",&a,&b);
	for(i=a+1;i<b;i++)
	{
		if(i%2!=0)
		{
			printf("%d",i);
			if(i!=b-1)
			printf(" ");
		}
	}
	
	return 0;
}
