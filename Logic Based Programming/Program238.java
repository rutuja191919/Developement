//Optimized anagram program 1

import java.lang.*;
import java.util.*;
import java.io.*;

class Program238
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

		int Frequency[] = new int[26];

		for(i = 0; i < arrfirst.length; i++)
		{
			if(arrfirst[i] != ' ')
			{
				Frequency[arrfirst[i] - 'a']++;
				Frequency[arrsecond[i] - 'a']--;
			}
		}

		for(i = 0; i < 26; i++)
		{
			if(Frequency[i] != 0)
			{
				break;
			}
		}

		if(i == 26)
		{
			System.out.println("Strings are anagram");
		}
		else
		{
			System.out.println("Strings are not anagram");
		}
	}		
}