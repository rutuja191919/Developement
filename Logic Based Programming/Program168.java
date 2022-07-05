//make bit toggle and get position from user

import java.lang.*;
import java.util.*;

class Bitwise
{
	public int ToggleBit(int iNo,int iPos)  //4th bit
	{ 
	 if(iPos <= 0 || iPos > 32)
	 {
		 System.out.println("Invalid Position");
		 return 0;
	 }
	 
	 int iMask = 0X00000001;
	 int iResult = 0;
	 
	 iMask = iMask << (iPos - 1);
	 
	 iResult = iNo ^ iMask;
	 
	 return iResult;
	}
}
class Program168
{
	public static void main(String args[])
	{
	  int iValue = 0, iPos = 0;
	  Scanner sobj = new Scanner(System.in);
	  	  
      System.out.println("Enter number");
	  iValue = sobj.nextInt();
	  
	  System.out.println("Enter the position");
	  iPos = sobj.nextInt();
	  
	  Bitwise bobj = new Bitwise();
	  int iRet = bobj.ToggleBit(iValue,iPos);
	  
	  System.out.println("Updated number is : "+iRet);
	}
}