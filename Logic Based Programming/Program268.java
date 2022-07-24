//Collections in Java

import java.lang.*;
import java.util.*;;

class Program268
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

        System.out.println(setobj);


    }
}