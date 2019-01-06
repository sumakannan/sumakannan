import java.io.*;
import java.util.Scanner;
class ks104 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int pow=1,i;
		int n=sc.nextInt();
		int k=sc.nextInt();
		for(i=0;i<k;i++)
		{
			pow=pow*n;
		}
		
System.out.println(pow);
	}

}
