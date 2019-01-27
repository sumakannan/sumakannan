#include <stdio.h>

int main(void) {
	char a[50];
	int c=0,i,s;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		s=a[i]-'0';
		if(!(s>=0&&s<=9||a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122))
		{
			if(a[i]!=' ')
			{
			c++;
			}
		}
	}
	printf("%d",c);
	return 0;
}
