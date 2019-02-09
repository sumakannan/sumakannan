#include <stdio.h>

int main(void) {
	char a[40];
	int len,i;
	scanf("%[^\n]",a);
	for(i=0;a[i]!='\0';i++);
	len=i;
	if(len%2!=0)
	{
		for(i=0;i<len;i++)
		{
			if(i==len/2)
			a[i]='*';
		}
	}
	else
	{
		for(i=0;i<len;i++)
		{
			if(i==len/2-1||i==len/2)
			a[i]='*';
		}
	}
printf("%s",a);
	
	return 0;
}
