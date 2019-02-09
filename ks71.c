#include <stdio.h>

int main(void) {
	char a[40];
	int len,i,c=0;
	scanf("%[^\n]",a);
	for(i=0;a[i]!='\0';i++);
	len=i;
	for(i=0;i<len/2;i++)
	{
		if(a[i]==a[len-1-i])
		c++;
	}
	if(c==len/2)
	printf("yes");
	else
	printf("no");
	
	return 0;
}
