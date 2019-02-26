#include <stdio.h>

int main(void) {
	int n,i,k,a[500],flag=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("Yes");
	else
	printf("No");
	
	return 0;
}
