import java.lang.*;
import java.util.*;
import java.io.*;

class Program230
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");
		String str  = sobj.nextLine();

        String newstr = str.replaceAll("\\s+"," ").trim();  //this is used to remove extra white spaces from he string along with both the sides of white spaces
		String arr[] = newstr.split(" ");

		System.out.println("Number of spaces in the string are : "+arr.length);
	}
}