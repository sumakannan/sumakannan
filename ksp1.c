#include<stdio.h>
int main()
{
	char a[40];
	int i,len;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++);
	len=i;
	for(i=len-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
