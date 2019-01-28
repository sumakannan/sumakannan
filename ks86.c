#include <stdio.h>

int main(void) {
	char a[30];
	int i,j,c=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]==a[j])
			{
				c=1;
			}
			if(c==1)
			break;
		}
	}
	if(c==1)
	{
		printf("No");
	}
	else
	{
		printf("Yes");
	}
	return 0;
}
