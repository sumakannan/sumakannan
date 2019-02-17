#include<stdio.h>
int main()
{
	char a[40],b[40];
	int i,c=0;
	scanf("%s%s",a,b);
	for(i=0;a[i]!='\0',b[i]!='\0';i++)
	{
	if(a[i]!=b[i])
	c++;
	}
	if(c==1)
	printf("yes");
	else
	printf("no");
return 0;
}
