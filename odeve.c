#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n<=0)
{
printf("Invalid");
}
else if(n%2==0)
{
printf("Even");
}
else
{
pritf("Odd");
}
return 0;
}
