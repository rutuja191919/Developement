//Find and replace the string

import java.lang.*;
import java.util.*;

class Program271
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string"); 
        String str = sobj.nextLine();

        System.out.println("Enter the word to replace");
        String strreplace = sobj.next();

        System.out.println("Enter the word by which the given word would replace");
        String strnewword = sobj.next();

        String newstr = str.replaceAll("\\s+"," ").trim();
        String updatedstr = " ";

        String Strarr[] = newstr.split(" ");

        for(String s : Strarr)
        {
            if(s.contains("."))
            {
                s = s.replace("."," ");
            }
            if(s.equals(strreplace))
            {
              updatedstr = updatedstr + strnewword + " ";  
            }
            else
            {
                updatedstr = updatedstr + s + " ";
            }
            
        }
         
        System.out.println("The updated string is : "+updatedstr);
    }
}