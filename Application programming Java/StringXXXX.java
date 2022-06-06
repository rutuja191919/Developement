import java.io.*;

class StringXXXX
{
	public static void main(String arg[])
	{
	   String str1 = "Hello";
	   String str2 = "Hello";
	   String str3 = new String("Hello");
	   
	   if(str1 == str3)  //if(100 == 100)..comparing the references(hashcode)
	                     // which is not valid
	   {
		   System.out.println("Strings are same");
	   }
	   else
	   {
		   System.out.println("Strings are diferent");
	   }
	   
	   if(str1.equals(str3))   //"Hello".equals("Hello")   ..Comparing data in that String
	   {
		   System.out.println("Strings are same");
	   }
	   else
	   {
		   System.out.println("Strings are diferent");
	   }
	}
}