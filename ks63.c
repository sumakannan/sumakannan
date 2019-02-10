#include <stdio.h>

int main(void) {
	int i,min,a[20];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<10;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d",min);
	return 0;
}
