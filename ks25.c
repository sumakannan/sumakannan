#include <stdio.h>

int main(void) {
    int a[20],n,i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n-1;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
    		}
    	}
    }
    printf("%d",a[n/2]);
	return 0;
}
