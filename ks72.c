#include <stdio.h>

int main(void) {
	char a[40];
	int len,i,c=0;
	scanf("%[^\n]",a);
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
	c++;
	}
	if(c>0)
	printf("yes");
	else
	printf("no");
	
	return 0;
}
