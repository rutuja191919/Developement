//Collections in Java

import java.lang.*;
import java.util.*;;

class Program269
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 1;

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        
        HashMap<Character, Integer> hobj = new HashMap<>();
        
        for(char ch : Arr)
        {
            if(hobj.containsKey(ch))
            {
                hobj.put(ch,hobj.get(ch)+1);  //Keys randomly tayar hotat
            }
            else
            {
                hobj.put(ch,1);
            }
        }
         
        Set<Character> setobj = hobj.keySet();
        int iMax = 0;
        char ch = ' ';

        for(char value : setobj)
        {
            if(hobj.get(value) > iMax)
            {
                iMax = hobj.get(value);
                ch = value;
            }
        }
        System.out.println(ch+" occurs "+iMax+" times ");
    }
}