#include <stdio.h>

int main(void) {
	char a[50];
	int s,i,c=0,b=0;
	scanf("%[^\n]",a);
	for(i=0;a[i]!='\0';i++)
	{
		s=a[i]-'0';
		if(s>=0&&s<=9)
		c=1;
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		b=1;
	}
	
	if(c==1&&b==1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
