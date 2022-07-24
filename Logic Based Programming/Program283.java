import java.lang.*;
import java.util.*;

interface MarvellousSort  //Hiding implementation details - Abstraction
{
	public void Accept();
	public void Display();
	public void BubbleSort();
	public void InsertionSort();
	public void SelectionSort();
}

class Array implements MarvellousSort
{
	public int Arr[];

	public Array(int iSize)
	{
		Arr = new int[iSize];
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the elements in array");

		for(int i = 0; i < Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}
	}

	public void Display()
	{
		System.out.println("The elements of array are");

		for(int i = 0; i < Arr.length; i++)
		{
			System.out.print(Arr[i]+ " ");
		}
		System.out.println();
	}

	public void BubbleSort()
	{
		int i = 0, j = 0, temp = 0;

		for(i = 0; i < Arr.length ;i++) 
		{
			for(j = 0; j < Arr.length-i-1; j++)
			{
				if(Arr[j] > Arr[j+1])
				{
					temp = Arr[j];
					Arr[j] = Arr[j+1];
					Arr[j+1] = temp;
				}
			}
			System.out.println("Pass : "+(i+1));
			Display();
		}
		
	}

	public void InsertionSort()
	{

	}
	public void SelectionSort()
	{

	}
}

class Program283
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size of array :");
		int size = sobj.nextInt();

		Array obj = new Array(size);

		obj.Accept();
		obj.Display();

		obj.BubbleSort();

		System.out.println("Data after sorting");
		obj.Display();
	}
}