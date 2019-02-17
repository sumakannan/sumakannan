#include<stdio.h>
int main()
{
	char a[40],temp;
	int i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i+=2)
	{
		if(a[i+1]!='\0')	
		{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		}
	}
	printf("%s",a);
return 0;
}
