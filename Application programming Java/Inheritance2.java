import java.lang.*;

class Base
{
	public int i;
	public int j;
	
	public Base(int a, int b)
	{
		this.i = a;
		this.j = b;
	}

	public void fun()
	{
		System.out.println("Inside base fun");
	}
	
	public void fun(int x)
	{
		System.out.println("Inside base fun with the integer argument");
	}
	
	public void gun()
	{
		System.out.println("Inside base gun");
	}
}

class Derived extends Base
{
	public int x;
	public int y;
	
	public Derived()  //Derived :: Base(11,12)
	{
		super(11,21);
		System.out.println("Inside derived constructor");
		this.x = 30;
		this.y = 40;
	}
	
	public void sun()
	{
		System.out.println("Inside derived sun");
		System.out.println(super.i); //1
		super.fun();     //2
	}
}

class Inheritance2
{
	public static void main(String arr[])
	{
		System.out.println("Inside main");
		Derived dobj = new Derived();
			
		dobj.sun();
	}
	
}