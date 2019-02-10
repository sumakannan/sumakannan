#include <stdio.h>

int main(void) {
	int l,b,h,vol,area;
	scanf("%d%d%d",&l,&b,&h);
	area=2*((l*b)+(b*h)+(h*l));
	vol=l*b*h;
	printf("%d ",area);
	printf("%d",vol);
	 
	return 0;
}
