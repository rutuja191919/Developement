import java.lang.*;
import java.io.*;

class Wrapper
{
	public static void main(String arg[]) throws IOException
	{
		int no = 11;
		
		Integer iobj = new Integer(11);
		
		int i = iobj;  //Unboxing
		
		Integer iobj2 = no;  //Boxing
		
		System.out.println(i);
		System.out.println(iobj2);
		System.out.println(no);
		System.out.println(iobj);
	
	}

}