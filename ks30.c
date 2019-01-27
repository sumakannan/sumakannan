#include <stdio.h>

int main(void) {
    int hr1,hr2,min1,min2,hr,min;
    scanf("%d%d",&hr1,&min1);
    scanf("%d%d",&hr2,&min2);
    hr=hr1-hr2;
    min=min1-min2;
    if(hr<1)
    printf("%d ",hr*-1);
    else
    printf("%d ",hr);
    if(min<1)
    printf("%d",min*-1);
    else
    printf("%d",min);
	return 0;
}
