import java.io.*;
import java.util.Scanner;
class ks94
{
	public static void main(String[] args)throws IOException
	{
		int[] a=new int[40];
		int i;
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int s=sc.nextInt();
		for(i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		System.out.println(a[s-1]);
	}
}
