import java.util.Scanner;
import java.lang.*;
import java.io.*;

class ks17
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int i,s=0,m,rem;
m=n;
while(n!=0)
{
rem=n%10;
s=s+rem*rem*rem;
n=n/10;
}
if(s==m)
{
System.out.println("yes");
}
else
{
	System.out.println("no");
}
	}
}
