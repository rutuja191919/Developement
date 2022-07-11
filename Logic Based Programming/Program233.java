//Anagram : same no of letter and frequency of letters is also same
//rescue and secure
//race and care
//cat and act

import java.lang.*;
import java.util.*;
import java.io.*;

class Program233
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");
		String str  = sobj.nextLine();
		int i = 0;

		char arr[] = str.toCharArray();
		int Frequency[] = new int[26];

		for(i = 0; i < arr.length; i++)
		{
			Frequency[arr[i] - 97]++;
		}

        for(i = 0; i< Frequency.length; i++)
		{
			System.out.println(Frequency[i]);
		}
	}
}