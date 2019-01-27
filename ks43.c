#include <stdio.h>

int main(void) {
	char a[30],b[30];
	int len_b,len_a,i,j;
	scanf("%s%s",a,b);
	for(i=0;a[i]!='\0';i++);
	len_a=i;
	for(i=0;b[i]!='\0';i++);
	len_b=i;
	j=0;
	for(i=len_a;i<len_a+len_b;i++)
	{
		a[i]=b[j];
		j++;
		
	}
	a[i]='\0';
	printf("%s",a);
	return 0;
}
