#include <stdio.h>
int main(void)
{
char a;
scanf("%c",&a);
if(a>=97&&a<=122||a>=65&&a<=90)
{
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='O'||a=='E'||a=='I'||a=='U')
	{
		printf("Vowel");
	}
	else
	{
		printf("Consonant");
	}
}
else
{
	printf("Invalid");
}
return 0;
}
