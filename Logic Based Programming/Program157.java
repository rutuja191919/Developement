import java.lang.*;
import java.util.*;

class Bitwise
{
	public void DisplayBinary(int iNo)
	{
		int iDigit = 0;
		
		while(iNo != 0)
		{
			iDigit = iNo % 2;
			System.out.print(iDigit);
			iNo = iNo / 2;
		}
		System.out.println();
	}
}
class Program157
{
	public static void main(String args[])
	{
	  int iValue = 0;
	  Scanner sobj = new Scanner(System.in);
	  	  
      System.out.println("Enter number");
	  iValue = sobj.nextInt();
	  
	  Bitwise bobj = new Bitwise();
	  
	  System.out.print("The binary number is : ");
	  bobj.DisplayBinary(iValue);
	  
	}
}