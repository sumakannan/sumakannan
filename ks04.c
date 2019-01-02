#include<stdio.h>
int main(void)
{
	char a;
	scanf("%c",&a);
	if(a>=97&&a<=122||a>=65&&a<=90)
	{
		printf("Alphabet");
	}
	else
	{
		printf("No");
	}
	return 0;
}
