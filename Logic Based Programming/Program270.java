//Collections in Java : String as key

import java.lang.*;
import java.util.*;;

class Program270
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 1;

        System.out.println("Enter the string");
        String string = sobj.nextLine();

        String Arr[] = string.split(" ");
        
        HashMap<String, Integer> hobj = new HashMap<>();
        
        for(String str : Arr)
        {
            if(hobj.containsKey(str))
            {
                hobj.put(str,hobj.get(str)+1);  //Keys randomly tayar hotat
            }
            else
            {
                hobj.put(str,1);
            }
        }
         
        Set<String> setobj = hobj.keySet();
        int iMax = 0;
        String s = "";

        for(String value : setobj)
        {
            if(hobj.get(value) > iMax)
            {
                iMax = hobj.get(value);
                s = value;
            }
        }
        System.out.println(s+" word occurs "+iMax+" times ");
    }
}