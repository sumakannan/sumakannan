import java.io.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;
class ks101 {
	public static void main(String[] args)throws IOException
	{
		String b;
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
 b=br.readLine();
 int n=Integer.parseInt(br.readLine());
 int len=b.length()-n;
	
	for(int i=len;i<b.length();i++)
	{
char a=b.charAt(i);
System.out.print(a);
	}
}
}
