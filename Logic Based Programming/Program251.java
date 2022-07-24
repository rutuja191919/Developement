import java.lang.*;
import java.util.*;
import MavellousMatrix.Matrix;

class Mymatrix extends Matrix
{
    public Mymatrix(int a, int b)
    {
        super(a,b);
    }

    public void SwapCol()
    {
        int iTemp = 0;

        for(int i = 0; i < iRow; i++)  
        {
            for(int j = 0; j<iCol-1; j+=2) //Handling the corner cases
            {
                iTemp = Arr[i][j];
                Arr[i][j] = Arr[i][j+1];
                Arr[i][j+1] = iTemp;
            }
        }     
    }
}

class Program251
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter number of rows");
        int x = sobj.nextInt();

        System.out.println("Enter number of columns");
        int y = sobj.nextInt();

        Mymatrix mobj = new Mymatrix(x,y);
        mobj.Accept();  //Inheritance
        mobj.Display();

        mobj.SwapCol();
        System.out.println("Data after swapping is :");
        mobj.Display();
    }
}