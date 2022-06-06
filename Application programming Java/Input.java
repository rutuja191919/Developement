import java.lang.*;
import java.util.*;

class Input
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Please enter your name");
		String name = sobj.nextLine();
		
		System.out.println("Please enter your age");
		int age = sobj.nextInt();
		
		System.out.println("Please enter your percentage");
		float percent = sobj.nextFloat();
		
		System.out.println("Your name is :"+name);
		System.out.println("Your age is :"+age);
		System.out.println("Your percentage is :"+percent);

        sobj.close();
	}
}