import java.io.*;
import java.util.Scanner;
class ks95
{
	public static void main(String[] args)throws IOException
	{
		Scanner sc=new Scanner(System.in);
		int p=sc.nextInt();
		int n=sc.nextInt();
		int r=sc.nextInt();
		int sum;
		sum=(p*n*r)/100;
		System.out.println(sum);
	}
}
