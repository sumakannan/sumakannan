#include <stdio.h>

int main(void) {
	char a[30],b[30];
	int len_b,len_a,i,c=0;
	scanf("%s%s",a,b);
	for(i=0;a[i]!='\0';i++);
	len_a=i;
	for(i=0;b[i]!='\0';i++);
	len_b=i;
	if(len_a==len_b)
	{
		printf("%s",a);
	}
	else
	{
		if(len_a>len_b)
		{
			printf("%s",a);
		}
		else
		{
			printf("%s",b);
		}
	}
	
	return 0;
}
