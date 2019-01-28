#include <stdio.h>

int main(void) {
	char a[30];
	int i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i+=2)
	printf("%c",a[i]);
	printf(" ");
	for(i=1;a[i]!='\0';i+=2)
	printf("%c",a[i]);
	return 0;
}
