#include<stdio.h>
#include<string.h>
int main()
{
	char a[40],b[40];
	int len1,len2,i,visit[256],c=0,n,s;
	scanf("%s%s",a,b);
	for(i=0;a[i]!='\0';i++);
	len1=i;
	for(i=0;b[i]!='\0';i++);
	len2=i;
	memset(visit,-1,256*sizeof(visit[0]));
	if(len1!=len2)
	{
		printf("no");
		
	}
	else
	{
		for(i=0;i<len1;i++)
		{
			s=a[i];
			n=b[i];
			if(visit[s]==-1)
			{
				if(visit[n]==-1)
				{
				visit[s]=n;
				visit[n]=s;
				c++;
				}
			}
			else
			{
				if(visit[s]==n)
				{
					c++;
				}
			}
			
		}
		if(c==len1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	}
	
return 0;
}
