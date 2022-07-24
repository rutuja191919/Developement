//BITWISE
import java.lang.*;
import java.util.*;

class Program264
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        long iNo = sobj.nextInt();

        System.out.println("Enter starting point");
        int iStart = sobj.nextInt();

        System.out.println("Enter ending point");
        int iEnd = sobj.nextInt();

        long iMask1 = 0xffffffffl;
        long iMask2 = 0xffffffffL;
        long iMask = 0L;

        iMask1 = iMask1 << (iStart-1);
        iMask2 = iMask2 >> (32 - iEnd);

        iMask = iMask1 & iMask2;

        long iResult = 0L;
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("Bits are ON");
        } 
        else
        {
            System.out.println("Bits are OFF");
        }

    }
}