#include <stdio.h>

int main(void) {
	char a[30];
	int c=0,i,s;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		s=a[i]-'0';
		if(s>=0&&s<=9)
		{
			c++;
			
		}
	}
	printf("%d",c);
	return 0;
}
