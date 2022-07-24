import java.lang.*;
import java.util.*;

class Program246
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter number of rows");
		int iRow = sobj.nextInt();

		System.out.println("Enter the number of columns");
		int iCol = sobj.nextInt();

		int Arr[][] = new int[iRow][iCol];

		System.out.println("Enter the elements");
		for(int i = 0; i<iRow; i++)
		{
			for(int j = 0; j<iCol; j++)
			{
				Arr[i][j] = sobj.nextInt();
			}
		}

		System.out.println("The Elements are");
		for(int i = 0; i<iRow; i++)
		{
			for(int j = 0; j<iCol; j++)
			{
				System.out.print(Arr[i][j]+" ");
			}
			System.out.println();
		}
	}
}