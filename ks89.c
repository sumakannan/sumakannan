#include <stdio.h>

int main(void) {
	char a[30],temp;
	int i,j,len;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++);
	len=i;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
	for(i=0;i<len;i++)
	{
	printf("%c",a[i]);
	}
	return 0;
}
