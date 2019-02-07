#include <stdio.h>

int main(void) {
	int a,b,i,sum,p,j,rem,s,n,c;
	scanf("%d%d",&a,&b);
	for(i=a+1;i<b;i++)
	{
		sum=0;
		p=1;
		s=i;
		n=i;
		c=0;
		while(s!=0)
		{
			s/=10;
			c++;
		}
		while(n!=0)
		{
			p=1;
			rem=n%10;
			for(j=0;j<c;j++)
			{
				p=p*rem;
			}
			sum=sum+p;
			n=n/10;
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}
