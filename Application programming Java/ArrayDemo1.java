import java.lang.*;
import java.util.*;

class ArrayDemo1
{
  public static void main(String args[])
  {
    int iNo = 0, i = 0, iSum = 0, iAvg = 0;
    Scanner sobj = new Scanner(System.in); 
    
    System.out.println("Enter the number of elements");
    iNo = sobj.nextInt();
    
    int arr[] = new int[iNo];
    
    System.out.println("Enter the elements");
    for(i = 0; i<iNo; i++)
    {
      arr[i] = sobj.nextInt();
    }
    System.out.println("The elements are");
    for(i = 0; i<iNo; i++)
    {
      System.out.println(arr[i]+" ");
       iSum = iSum + arr[i];
    }

    iAvg = iSum/iNo;
    
    System.out.println("Average of all numbers is : "+iAvg);
  }
}
