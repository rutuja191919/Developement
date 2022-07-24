//76545
//7+6+5+4+5 = 27
//2+7 = 9
//ans = 9

import java.lang.*;
import java.util.*;

class Program261
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        System.out.println("Enter the number");
        int no = sobj.nextInt();

        int iSum = 0;

        while(true)
        {
            iSum = 0;
            while(no > 0)
            {
                iSum= iSum + no%10;
                no = no/10;
            } 
            no = iSum;
            if(no < 10)
            {
                break;
            }   
        }

        System.out.println(no);
    }
}