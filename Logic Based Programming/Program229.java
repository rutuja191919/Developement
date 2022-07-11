import java.lang.*;
import java.util.*;
import java.io.*;

class Program229
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");
		String str  = sobj.nextLine();

		String arr[] = str.split(" ");

		System.out.println("Number of spaces in the string are : "+arr.length);
	}
}