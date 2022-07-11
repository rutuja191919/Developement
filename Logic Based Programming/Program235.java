import java.lang.*;
import java.util.*;
import java.io.*;

class Program235
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");
		String str  = sobj.nextLine();
		int i = 0, iMax = 0;

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

		iMax = Frequency[0];
		int iPos = 0;
        for(i = 0; i< Frequency.length; i++)
		{
			if(Frequency[i] > iMax)
			{
				iMax = Frequency[i];
				iPos = i;
			}
		}

		System.out.println("Character with the maximum frequency is "+ ((char)(iPos + 'a')) + " with frequency "+ iMax);
	}
}