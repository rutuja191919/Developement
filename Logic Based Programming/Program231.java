import java.lang.*;
import java.util.*;
import java.io.*;

class Program231
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");
		String str  = sobj.nextLine();

        String newstr = str.replaceAll("\\s+"," ").trim();  //this is used to remove extra white spaces from he string along with both the sides of white spaces
		String arr[] = newstr.split(" ");
        int iMax = 0, iIndex = 0;

		iMax = arr[0].length(); 


		for(int i = 0; i<arr.length; i++)
		{
			if(arr[i].length() >= iMax)
			{
				iMax = arr[i].length();
				iIndex = i;
			}
		}

		System.out.print("large word is : "+arr[iIndex]);
		System.out.println(" and length is :"+iMax);
	}
}