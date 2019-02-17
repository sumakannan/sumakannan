#include<stdio.h>
int main()
{
	char a[40];
	int i;
	for(i=0;a[i]!='\0';i++);
	len=i;
	a[len]='.';
	a[len+1]='\0';
	printf("%s",a);
	return 0;
}
