import java.io.*;
import java.util.Scanner;
class ks92
{
	public static void main(String[] args)throws IOException
	{
		int[] a=new int[40];
		int i,sum=0;
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		System.out.println(sum);
	}
}
