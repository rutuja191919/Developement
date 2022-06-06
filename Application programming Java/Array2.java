import java.lang.*;
import java.util.*;

class Array2
{
	public static void main(String arg[])
	{
		int iSize = 0, iCnt = 0;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the no of elements");
		iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter the number of elements in array");
	    for(iCnt = 0; iCnt<iSize; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}			
		
		System.out.println("The elements of array");
	    for(iCnt = 0; iCnt<iSize; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}			
		
	}
}
