#include <stdio.h>

int main(void) {
	int n,i;
	char a[50];
	scanf("%d",&n);
	scanf(" %[^\n]",a);
	for(i=n-1;i>=0;i--)
	{
		if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
		printf("%c",a[i]);
	}
	return 0;
}
