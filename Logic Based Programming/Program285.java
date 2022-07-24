//Efficient bubble sort

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

    public void BubbleSort(){}

	public void BubbleSort(char type)
	{
		int i = 0, j = 0, temp = 0;
		
		boolean Swap = false;

        if(type == 'I' || type == 'i')
		{
		  for(i = 0; i < Arr.length-1 ;i++)   //last iteration la element setteled asnarach ahe tar ek iteration kami karayache 
		  {
			Swap = false;
			for(j = 0; j < Arr.length-i-1; j++)
			{
				if(Arr[j] > Arr[j+1])
				{
					temp = Arr[j];
					Arr[j] = Arr[j+1];
					Arr[j+1] = temp;
					Swap = true;
				}
			}
			System.out.println("Pass : "+(i+1));
			Display();
			if(Swap == false)
			{
				break;
			}
		 }
		}
		if(type == 'D' || type == 'd')
		{
		  for(i = 0; i < Arr.length-1 ;i++)   //last iteration la element settled asnarach ahe tar ek iteration kami karayache 
		  {
			Swap = false;
			for(j = 0; j < Arr.length-i-1; j++)
			{
				if(Arr[j] < Arr[j+1])
				{
					temp = Arr[j];
					Arr[j] = Arr[j+1];
					Arr[j+1] = temp;
					Swap = true;
				}
			}
			System.out.println("Pass : "+(i+1));
			Display();
			if(Swap == false)
			{
				break;
			}
		 }
		}
	}

	public void InsertionSort()
	{
		int i = 0,j = 0,selected = 0;

		for(i = 1; i< Arr.length ;i++)
		{
			for(j = i-1, selected = Arr[i]; (j >= 0) && (Arr[j] > selected) ;j--)
			{
				Arr[j+1] = Arr[j];
			}
			Arr[j+1] = selected;
		}
	}

	public void SelectionSort(){}
	public void SelectionSort(char type)
	{
		int i = 0, j = 0, min_index = 0, temp = 0, max_index = 0;

        if(type == 'I' || type == 'i')
		{
			for(i = 0; i < Arr.length-1; i++) //Arr.length-1 means you do not have to iterate over last element as it gets sorted already
			{
				min_index = i;
				for(j = i+1; j < Arr.length; j++)
				{
					if(Arr[min_index] > Arr[j])
					{
						min_index = j;
					}
				}
				if(i != min_index)
				{
					temp = Arr[i];
					Arr[i] = Arr[min_index];
					Arr[min_index] = temp;
				}
			}
		}
		if(type == 'D' || type == 'd')
		{
			for(i = 0; i < Arr.length-1; i++) //Arr.length-1 means you do not have to iterate over last element as it gets sorted already
			{
				max_index = i;
				for(j = i+1; j < Arr.length; j++)
				{
					if(Arr[max_index] < Arr[j])
					{
						max_index = j;
					}
				}
				if(i != max_index)
				{
					temp = Arr[i];
					Arr[i] = Arr[max_index];
					Arr[max_index] = temp;
				}
			}
		}	
	}
}

class Program285
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size of array :");
		int size = sobj.nextInt();

		Array obj = new Array(size);

		obj.Accept();
		obj.Display();

		/*obj.BubbleSort('I');

		System.out.println("Data after sorting : Increasing order");
		obj.Display();

		
		obj.BubbleSort('D');

		System.out.println("Data after sorting : Decreasing order");
		obj.Display();
		
		System.out.println("Increasing order");
		obj.SelectionSort('I');
		obj.Display();
		
		System.out.println("Decreasing order");
		obj.SelectionSort('D');
		obj.Display();
		*/
		obj.InsertionSort();
		obj.Display();
	}
}