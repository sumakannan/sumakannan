#include <stdio.h>

int main(void) {
    int f1=0,f2=1,f3,i,n;
    scanf("%d",&n);
    printf("%d ",f2);
    for(i=0;i<n-1;i++)
    {
    	f3=f1+f2;
    	printf("%d ",f3);
    	f1=f2;
    	f2=f3;
    }
    
    
	return 0;
}
