import java.io.*;
import java.util.*;
class ks108
{
	public static void main(String[] args)throws IOException
	{
Scanner sc=new Scanner(System.in);
int n,k,i,j,min=0,pos=0;
int[] a=new int[40];
n=sc.nextInt();
k=sc.nextInt();
for(i=0;i<n;i++)
{
	a[i]=sc.nextInt();
}
for(i=0;i<n-k+1;i++)
{
	min=0;
	for(j=0;j<n;j++)
	{
		if(min<a[j])
		{
			pos=j;
			min=a[j];
		}
	}
	a[pos]=0;
}
 System.out.println(min);
}
}
