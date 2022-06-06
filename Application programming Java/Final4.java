import java.lang.*;

final class Base
{
	public void fun()
	{
		System.out.println("Base fun");
	}
}

class Derived
{
	public Base bobj = new Base();  //Composition
	
	public void gun()
	{
		System.out.println("Derived gun");
	}
	
}

class Final3
{
	public static void main(String arg[])
	{
		
	}
}
