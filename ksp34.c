#include <stdio.h>

int main(void) {
	int i;
	char a[50];
	gets(a);
	for(i=0;a[i]!='\0';i+=3)
	{
		printf("%c",a[i]);
	}
	return 0;
}
