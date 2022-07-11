import java.lang.*;
import java.util.*;
import java.io.*;

class Program236
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

		int Frequencyfirst[] = new int[26];
		int Frequencysecond[] = new int[26];

		for(i = 0; i < arrfirst.length; i++)
		{
			if(arrfirst[i] != ' ')
			{
				Frequencyfirst[arrfirst[i] - 'a']++;
			}	
		}

		for(i = 0; i < arrsecond.length; i++)
		{
			if(arrsecond[i] != ' ')
			{
				Frequencysecond[arrsecond[i] - 'a']++;
			}	
		}

		for(i = 0; i < 26; i++)
		{
			if(Frequencyfirst[i] != Frequencysecond[i])
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