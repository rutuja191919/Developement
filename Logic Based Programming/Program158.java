import java.lang.*;
import java.util.*;

class Bitwise
{
	public boolean CheckBit(int iNo)
	{
		int iMask = 4;
		int iResult = 0;
		
		iResult = iNo & iMask;
		if(iResult == 0)
		[
		 return false;
	    }
	    else
	    {	
    	 return true;
		}
		
	}
}
class Program158
{
	public static void main(String args[])
	{
	  int iValue = 0;
	  Scanner sobj = new Scanner(System.in);
	  	  
      System.out.println("Enter number");
	  iValue = sobj.nextInt();
	  
	  Bitwise bobj = new Bitwise();
	  boolean bRet = bobj.CheckBit(iValue);
	  
	  if(bRet == true)
	  {
		  System.out.println("Bit is on");
	  }
	  else
	  {
		  System.out.println("Bit is off");
	  }
	}
}