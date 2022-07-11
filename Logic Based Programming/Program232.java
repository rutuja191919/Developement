import java.lang.*;
import java.util.*;
import java.io.*;

class Program232
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");
		String str  = sobj.nextLine();

        String newstr = str.replaceAll("\\s+"," ").trim();  //this is used to remove extra white spaces from he string along with both the sides of white spaces
		String arr[] = newstr.split(" ");
        
		StringBuffer finalstr = new StringBuffer();

		for(int i = 0; i < arr.length; i++)
		{
			StringBuffer sb = new StringBuffer(arr[i]);
			finalstr = finalstr.append(sb.reverse()).append(" ");
		}
		String str1 = finalstr.toString();
		System.out.println(str1.trim());
	}
}