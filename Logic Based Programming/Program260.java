import java.lang.*;
import java.util.*;

class Program260
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        System.out.println("Enter the number");

        char Arr[] = Integer.toString(sobj.nextInt()).toCharArray();

        for(i = Arr.length-1; i >= 0; i--)
        {
            for(j = 0; j <= i; j++)
            {
                System.out.print(Arr[j]+" ");
            }
            System.out.println();
        }  
    }
}