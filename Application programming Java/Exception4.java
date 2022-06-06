import java.lang.*;
import java.util.*;

class Demo
{
	public int Division(int no1, int no2) throws ArithmeticException
    {
		return no1/no2;
	}
	
}
class Exception4
{
	public static void main(String args[])
	{
		int ret = 0;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first number");
		int no1 = sobj.nextInt();
		
		System.out.println("Enter second number");
		int no2 = sobj.nextInt();
		
		Demo dobj = new Demo();
		try
		{
		ret = dobj.Division(no1,no2);
		}
		catch(ArithmeticException obj)
		{
			System.out.println("Inside catch");
			System.out.println("Exception occured :"+obj);
		}
		
		System.out.println("Division is : "+ret); 
	}
}