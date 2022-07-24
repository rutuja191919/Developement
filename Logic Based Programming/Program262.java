//BITWISE
import java.lang.*;
import java.util.*;

class Program262
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iNo = sobj.nextInt();

        int iMask = 0x0000000f;

        int iResult = 0;
        

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("First Nibble is completely ON");
        }
        else
        {
            System.out.println("First Nibble is OFF");
        }
    }
}