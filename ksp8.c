#include<stdio.h>
int main()
{
	char a[40];
	int len,i;
	scanf("%[^\n]",a);
	for(i=0;a[i]!='\0';i++);
	len=i;
	for(i=0;i<len;i++)
	{
		if(a[0]>=97&&a[0]<=122)
		a[0]=a[0]-32;
		if(a[i]==' ')
		{
		if(a[i+1]>=97&&a[i+1]<=122)
		{
		a[i+1]=a[i+1]-32;
		}
		i++;
		}
		else
		{
			if(a[i]>=65&&a[i]<=91)
			{
				a[i]=a[i]+32;
			}
		}
	}
printf("%s",a);
return 0;
}
