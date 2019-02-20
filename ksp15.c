#include <stdio.h>

int main(void) {
	char a[50],ch,max=0;
	int i,len,j,c;
	scanf("%[^\n]",a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		c=0;
		if(a[i]!='\0')
		{
			for(j=0;j<len;j++)
			{
				if(a[i]==a[j])
				{
					c++;
					a[j]=='\0';
				}
			}
			if(c>max)
			{
				ch=a[i];
				max=c;
			}
		}
	}
	printf("%c",ch);
	return 0;
}
