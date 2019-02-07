#include <stdio.h>

int main(void) {
	int a,b,i,j,c,n;
	scanf("%d%d",&a,&b);
	for(i=a+1;i<b;i++)
	{
		c=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				c=1;
			}
		}
		if(c==0&&i!=1)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}
