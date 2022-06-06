import java.lang.*;
import java.util.*;

class JaggedArray
{ 
  public static void main(String arg[])
  {
	 int iRows = 0, iNo = 0, i = 0, j = 0;
	 Scanner sobj = new Scanner(System.in);
	 
	 System.out.println("Enter the number of rows");
     iRows = sobj.nextInt();
	 
	 int arr[][] = new int[iRows][];
	 
	 for(i = 0; i<iRows; i++)
	 {
		System.out.println("Enter the no of columns in "+(i+1)+" row");
		iNo = sobj.nextInt();
		arr[i] = new int[iNo];
     }
     
	 
	 for(i = 0; i<arr.length; i++)
	 {
		 iNo = 0;
		 System.out.println("Enter the elements in "+(i+1)+" row");
		 for(j = 0; j<arr[i].length; j++)
	     {
			iNo = sobj.nextInt();
            arr[i][j] = iNo;			
		 }			 
	 }
	 
	 for(i = 0; i<arr.length; i++)
	 {
		 System.out.print("\nElements in "+(i+1)+" array are : ");
		 for(j = 0; j<arr[i].length; j++)
	     {
            System.out.print(arr[i][j]+" ");			
		 }			 
	 }
     
  }
}