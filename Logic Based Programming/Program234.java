import java.lang.*;
import java.util.*;
import java.io.*;

class Program234
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");
		String str  = sobj.nextLine();
		int i = 0;

        str = str.toLowerCase();

		char arr[] = str.toCharArray();
		int Frequency[] = new int[26];

		for(i = 0; i < arr.length; i++)
		{
			if(arr[i] != ' ')
			{
				Frequency[arr[i] - 'a']++;
			}	
		}

        for(i = 0; i< Frequency.length; i++)
		{
			if(Frequency[i] > 0)
			{
				System.out.println((char)(i+'a') + " : " + Frequency[i]);
			}
		}
	}
}