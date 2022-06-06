import java.lang.*;

class Array1
{
	public static void main(String args[])
	{
		int arr[] = new int[5];
		int iCnt = 0;
		
		arr[0] = 10;
		arr[1] = 20;
		arr[2] = 30;
		arr[3] = 40;
		arr[4] = 50;
		
		System.out.println("Size of the array is : "+arr.length); 
		System.out.println("Elements of array are :"+arr);
		
		for(iCnt = 0; iCnt<arr.length ;iCnt++)
		{
			System.out.println(arr[iCnt]);
		}
		
		iCnt = 0;
		while(iCnt<arr.length)
		{
			System.out.println(arr[iCnt]);
			iCnt++;
		}
		
		System.out.println("Data by for each loop");
		for(int no:arr)
		{
			System.out.println(no);
		}
	}
}