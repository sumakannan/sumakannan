#include <stdio.h>

int main(void) {
	char a[50];
	int i,n;
	scanf("%[^\n]",a);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
