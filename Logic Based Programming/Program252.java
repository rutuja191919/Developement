import java.lang.*;
import java.util.*;

class Program252
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        char arr[] = str.toCharArray();

        for(int i = 0; i < arr.length; i++)
        {
            for(int j = 0; j < arr.length; j++)
            {
                System.out.print(arr[j]+" ");
            }
            System.out.println();
        } 
    }
}