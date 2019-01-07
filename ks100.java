import java.io.*;
import java.util.Scanner;
class ks97
{
	public static void main(String[] args)throws IOException
	{
		Scanner sc=new Scanner(System.in);
		long n=sc.nextInt();
		long rem,mul=1;
		
		while(n!=0)
		{
			rem=n%10;
			mul=mul*rem;
			n=n/10;
		}
		System.out.println(mul);
	}
}
