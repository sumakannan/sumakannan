#include <stdio.h>

int main(void) {
	int i,c=0,n;
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		if(n==i)
		{
			c=1;
			break;
		}
	}
	if(c==1)
	    printf("yes");
	    else
	    printf("no");
	return 0;
}
