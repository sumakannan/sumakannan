#include <stdio.h>

int main(void) {
	char a[30];
	int i,s;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		s=a[i]-'0';
		if(s>=0&&s<=9)
		printf("%d",s);
	}
	return 0;
}
