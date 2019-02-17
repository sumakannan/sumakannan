#include<stdio.h>
int main()
{
	int a,b,i,c=0,j,flag=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
			flag=1;
			break;
			}
		}
	if(flag==0)
	c++;
	flag=0;
	}
	printf("%d",c);
return 0;
}
