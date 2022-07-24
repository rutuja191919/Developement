import java.lang.*;
import java.util.*;
import MavellousMatrix.Matrix;

class Mymatrix extends Matrix
{
    public Mymatrix(int a, int b)
    {
        super(a,b);
    }

    public int Maximum()
    {
        int iMax = Arr[0][0];

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
        }
        return iMax;
    }

    public int Minimum()
    {
        int iMin = Arr[0][0];

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if(Arr[i][j] < iMin)
                {
                    iMin = Arr[i][j];
                }
            }
        }
        return iMin;
    }
}

class Program249
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

        System.out.println("The Maximum element is :"+mobj.Maximum(););
        System.out.println("The Minimum element is :"+mobj.Minimum());
    }
}