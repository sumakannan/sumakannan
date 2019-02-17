#include<stdio.h>
int main()
{
	char a[40];
	int b[50],flag=0,k,i,len;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++);
	len=i;
	for(i=0;i<len;i++)
	{
	switch(a[i])
	{
		case 'I':
		b[i]=1;
		break;
		case 'V':
		b[i]=5;
		break;
		case 'X':
		b[i]=10;
		break;
		default:
		flag=1;
		break;
	}
	if(flag==1)
	break;
	}
k=b[0];
for(i=len-1;i>0;i--)
{
	if(b[i]<=b[i-1])
	{
		k=k+b[i];
	}
	else
	{
		k=b[i]-k;
	}
}
printf("%d",k);
return 0;
}
