import java.lang.*;
import java.util.*;

class ArrayX
{
	private int Arr[];
	
	public ArrayX(int iNo)
	{
		Arr = new int[iNo];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		int iCnt = 0;
		
		System.out.println("Enter the elements");
		
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}
	
	public void Display()
	{
		int iCnt = 0;
		
		System.out.println("The values are");
		for(iCnt = 0 ; iCnt < Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
	
	public int Summation()
	{
	 int iSum = 0, iCnt = 0;
	 
	 for(iCnt = 0; iCnt < Arr.length; iCnt++)
	 {
		 iSum += Arr[iCnt];
	 }
	 return iSum;
	}
}

class program124
{
	public static void main(String arg[])
	{
		int iValue = 0;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the value for constructor");
		iValue = sobj.nextInt();
		
		ArrayX aobj = new ArrayX(iValue);
		int iRet = 0;
		
		aobj.Accept();
		aobj.Display();
		
		iRet = aobj.Summation();
		System.out.println("The addition is : "+iRet);
		
		aobj = null;
	}
}