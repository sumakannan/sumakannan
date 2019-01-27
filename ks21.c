#include <stdio.h>

int main(void) {
    int n,b,d,sum=0,i,a[40];
    scanf("%d%d%d",&n,&b,&d);
    a[0]=b;
    for(i=1;i<n;i++)
    {
    	a[i]=a[i-1]+d;
    }
    for(i=0;i<n;i++)
    {
    	sum=sum+a[i];
    }
    printf("%d",sum);
    
	return 0;
}
