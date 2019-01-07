import java.io.*;
import java.util.Scanner;
class ks97
{
	public static void main(String[] args)throws IOException
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int pow=0,rem;
		while(n!=0)
		{
			rem=n%10;
			pow=pow*10+rem;
			n=n/10;
		}

		System.out.println(pow);
	}
}
