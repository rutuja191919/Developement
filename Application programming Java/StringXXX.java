import java.io.*;

class StringXXX
{
	public static void main(String arg[])
	{
	    int i = 0;
		String str = "Marvellous";
		
		char arr[] = str.toCharArray();
		
		for(i = 0; i<arr.length; i++)
		{
			System.out.println(arr[i]);
		}

        String str1 = new String("Hello");
        StringBuffer str2 = new StringBuffer("Hello");
        StringBuilder str3 = new StringBuilder("Hello");		
	    
		System.out.println(str1);
		System.out.println(str1.length());
		
		System.out.println(str2);
		System.out.println(str2.length());
		
		System.out.println(str3);
		System.out.println(str3.length());
	
	}

}