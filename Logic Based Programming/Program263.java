//BITWISE
import java.lang.*;
import java.util.*;

class Program263
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        long iNo = sobj.nextLong();

        long iMask = 0xf000000fL;

        long iResult = 0L;
        
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("First and last Nibble is completely ON");
        }
        else
        {
            System.out.println("First and last Nibble is OFF");
        }
    }
}