#include <stdio.h>

int main(void) {
	char a[30];
	int i;
	scanf("%[^\n]",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(i==0)
		{
			if(a[i]>=97&&a[i]<=122)
		    a[i]=a[i]-32;
		}
		if(a[i]==' ')
		{
			if(a[i+1]>=97&&a[i+1]<=122)
			a[i+1]=a[i+1]-32;
		}
		
	}
	printf("%s",a);
	return 0;
}
