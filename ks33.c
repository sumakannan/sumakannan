#include <stdio.h>

int main(void) {
	char a[30];
	int c=1,i;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			c++;
		}
	}
	printf("%d",c);
	return 0;
}
