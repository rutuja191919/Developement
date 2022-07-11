//Optimized anagram program 2 using inbuilt functions

import java.lang.*;
import java.util.*;
import java.io.*;

class Program239
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the first string : ");
		String strfirst  = sobj.nextLine();

		System.out.println("Enter the second string : ");
		String strsecond  = sobj.nextLine();

		int i = 0, iMax = 0;

        if(strfirst.length() != strsecond.length())
		{
			System.out.println("Strings are not angram as lengths are different");
			return;
		}

        strfirst = strfirst.toLowerCase();
		strsecond = strsecond.toLowerCase();

		char arrfirst[] = strfirst.toCharArray();
		char arrsecond[] = strsecond.toCharArray();

		Arrays.sort(arrfirst);
		Arrays.sort(arrsecond);

		if(Arrays.equals(arrfirst,arrsecond))
		{
			System.out.println("Strings are anagram");
		}
		else
		{
			System.out.println("Strings are not anagram");
		}
	}		
}