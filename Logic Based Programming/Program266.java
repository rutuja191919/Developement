//Rotation of String : Concated Comparison Algorithm

import java.lang.*;
import java.util.*;

class Program266
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string");
        String str1 = sobj.nextLine();

        System.out.println("Enter rotated string");
        String str2= sobj.nextLine();

        if(str1.length() != str2.length())  //filter
        {
            System.out.println("Strings are not in rotation");
            return;
        }
 
        String str3 = str1 + str1;

        if(str3.contains(str2))
        { 
            System.out.println("Strings are in rotation");
        }
        else
        {
            System.out.println("Strings are not in rotation");
        }


        
    }
}

//str1  Hello
//str2  loHel

//str3 HelloHello