//toggle 4th bit

import java.lang.*;
import java.util.*;

class Bitwise
{
	public int OnBit(int iNo)  //4th bit
	{
		int iMask = 0X00000008;
		int iResult = 0;
		
		iResult = iNo ^ iMask;
		
		return iResult;
	}
}
class Program165
{
	public static void main(String args[])
	{
	  int iValue = 0;
	  Scanner sobj = new Scanner(System.in);
	  	  
      System.out.println("Enter number");
	  iValue = sobj.nextInt();
	  
	  Bitwise bobj = new Bitwise();
	  int iRet = bobj.OnBit(iValue);
	  
	  System.out.println("Updated number is : "+iRet);
	}
}