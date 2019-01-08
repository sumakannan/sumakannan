

import java.util.Scanner;
import java.lang.*;
import java.io.*;

class ks98
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int[] a=new int[30];
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int i;
		for(i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
			
		}
		int j=1;
		for(i=0;i<n;i++)
		{
			if(a[i]!=j)
			{
				System.out.println(i);
				break;
			}
			j++;
		}
	 	
	}
}
