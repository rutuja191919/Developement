import java.lang.*;
import java.util.*;
 
class Array3
{
	public static void main(String args[])
	{
		int Arr[][] = new int[2][3];
		int iCnt = 0, jCnt = 0;
		
		Arr[0][0] = 11;
		Arr[0][1] = 21;
		Arr[0][2] = 51;
		Arr[1][0] = 101;
		Arr[1][1] = 111;
		Arr[1][2] = 121;
		
		System.out.println("The elements in array are");
	
	    for(iCnt = 0; iCnt<Arr.length; iCnt++)
		{
			for(jCnt = 0; jCnt<Arr[iCnt].length; jCnt++)
			{
				System.out.println(Arr[iCnt][jCnt]);
			}
		}
	}
	
}