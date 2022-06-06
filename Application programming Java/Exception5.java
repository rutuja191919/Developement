import java.lang.*;
import java.util.*;

class AgeInvalidException extends Exception
{
	public AgeInvalidException(String str)
	{
		super(str);
	}
}

class Exception5
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter your age");
		int iAge = sobj.nextInt();
		
		try
		{
			if(iAge<18)
			{
				throw new AgeInvalidException("Age is below 18");
			}
		}
		catch(AgeInvalidException obj)
		{
			System.out.println("Inside catch");
		    System.out.println(obj);
		}
	}
}