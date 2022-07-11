import java.lang.*;
import java.util.*;
import java.io.*;

class Program228
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");
		String str  = sobj.nextLine();

		char arr[] = str.toCharArray();
		int cnt = 0;

		for(int i = 0; i<arr.length; i++)
		{
			if((arr[i] >= 'a') && (arr[i] <= 'z'))
			{
				cnt++;
			}
		}

		System.out.println("Number of small case characters in the string are : "+cnt);
	}
}