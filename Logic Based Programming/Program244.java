//DO THIS
//Display sum of all elements
//reverse the row data
//even numbers addition
//Maximum no of rows
//Display the addition of border elements
//Display the addition of matrix 
//All pattern printing questions

import java.io.*;
import java.util.*;

class Program244
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iSum = 0;

		System.out.println("Enter the number of rows");
		int iRow = sobj.nextInt();

		System.out.println("Enter the number of columns");
		int iCol = sobj.nextInt();

		int Arr[][] = new int[iRow][iCol];

		System.out.println("Enter the elements");
		for(int i = 0; i < Arr.length; i++)
		{
			for(int j = 0; j < Arr[i].length; j++)
			{
				Arr[i][j] = sobj.nextInt();
			}
		}

		for(int i = 0; i < iRow; i++)
		{
			iSum = 0;
			for(int j = 0; j < iCol; j++)
			{
					iSum = iSum + Arr[i][j];
			}
			System.out.println("The addition of "+(i+1)+" row is " +iSum);
		}
		
	}
}