import java.lang.*;
import java.util.*;

class Program258
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        System.out.println("Enter the number");
        int no = sobj.nextInt();
        
        String temp = Integer.toString(no);

        char Arr[] = temp.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr.length; j++)
            {
                System.out.print(Arr[j]+" ");
            }
            System.out.println();
        }  
    }
}