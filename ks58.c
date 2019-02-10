#include <stdio.h>

int main(void) {
	int n,k,a[30],i,flag=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		flag=1;
	}
	if(flag==1)
	printf("yes");
	else
	printf("no");
	return 0;
}
