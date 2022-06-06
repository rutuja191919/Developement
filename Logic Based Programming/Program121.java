import java.lang.*;
import java.util.*;

class Number
{
	public int iNo;

	public void Accept()
	{ 
	    Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the number");
		this.iNo = sobj.nextInt();
	}
	
	public void Display()
	{
		System.out.println("The number is : "+iNo);
	}
	
	public int Factorial()
	{
		int iCnt = 0, iFact = 1;
		
		for(iCnt = this.iNo ; iCnt >= 1; iCnt--)
		{
			iFact *= iCnt;
		}
		
		return iFact;
	}
}
class Program121
{
	public static void main(String arg[])
	{ 
	    int iRet = 0;
		
		Number nobj = new Number();
		
		nobj.Accept();
		nobj.Display();
		
		iRet = nobj.Factorial();
		
		System.out.println("The factorial is : "+iRet);
	
	}
}