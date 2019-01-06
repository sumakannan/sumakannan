import java.io.*;
import java.util.Scanner;
public class ks106 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	    Scanner sc=new Scanner(System.in);
	    int[] a=new int[30];
	    int i,n,t=1,k,c=0,b=0,j;
	    n=sc.nextInt();
	    k=sc.nextInt();
	    for(i=0;i<n;i++)
	    {
	    	a[i]=sc.nextInt();
	    }
	    j=0;
	    while(t==1)
	    {
	    	if(a[j]%2!=0)
{
	c++;
	if(c==k)
	{
	    b=a[j];
		t=0;
	}
}
	j++;
}
System.out.println(b);
	}

}
