import java.io.*;
import java.util.Scanner;
class ks105
{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int p=sc.nextInt();
		int a=1,q;
		int num;
		q=p;
		while(p!=0)
		{
		        a=a*10;
			p=p/10;
		}
		if(q==0)
		{
			a=a*10;
                        num=n*a+q;
}
else
{
	num=n*a+q;
}
System.out.println(num);
	}

}
