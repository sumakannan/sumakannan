import java.io.*;
import java.util.Scanner;
class ks102
{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int t=1;
		while(t==1)
		{
			if(n%2==0)
			{
				n=n/2;
				t=1;
			}
			else{
				t=0;
			}
		}
		System.out.println(n);
	}
}
			
