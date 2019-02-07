#include <stdio.h>

int main(void) {
	char a[20];
	int i,c=0,s;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		s=a[i]-'0';
		if(!(s>=0&&s<=9)&&a[i]!='.')
		c++;
	}
	if(c>0)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	
	
	return 0;
}
