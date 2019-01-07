import java.io.*;
import java.util.Scanner;
class ks97
{
	public static void main(String[] args)throws IOException
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int m=sc.nextInt();
		int p=sc.nextInt();
		int sum;
		sum=(n*m)%p;

		System.out.println(sum);
	}
}
