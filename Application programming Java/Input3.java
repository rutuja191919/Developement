import java.lang.*;
import java.io.*;

class Input3
{
	public static void main(String arg[]) throws IOException
	{
		InputStreamReader iobj = new InputStreamReader(System.in);
		
		BufferedReader bobj = new BufferedReader(iobj);
		
		System.out.println("Enter string");
		String str = bobj.readLine();
		
		System.out.println("Enter integer");
		int no = Integer.parseInt(bobj.readLine());
		
		System.out.println("Enter float");
		float f = Float.parseFloat(bobj.readLine());
		
		System.out.println("Enter double");
		double d = Double.parseDouble(bobj.readLine());
		
		System.out.println("The entered string is : "+str);
		System.out.println("The entered Integer is : "+no);
		System.out.println("The entered Float is : "+f);
        System.out.println("The entered double is : "+d);
	   
	
	
	}

}