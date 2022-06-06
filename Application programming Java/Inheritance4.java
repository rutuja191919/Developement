import java.lang.*;

/*
class Object
{
	//contents
}
*/

class Base   //class Base extends Object
{
	public int i;
	public int j;
	
	public void fun()
	{
		System.out.println("Inside base fun");
	}
}
class Derived extends Base
{
	public int x;
	public int y;
	
	public void gun()
	{
		System.out.println("Inside derived gun");
	}
}
class DerivedX extends Derived
{
	public int a;
	
	public void sun()
	{
		System.out.println("Inside DerivedX sun");
	}
}

class Inheritance4
{
	public static void main(String arr[])
	{
		System.out.println("Inside main");
		Derived dobj = new Derived();
			
		dobj.sun();
	}
	
}