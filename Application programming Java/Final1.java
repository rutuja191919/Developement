import java.lang.*;

class Demo
{
	public int i;
	public final int j = 20;
	public final int k;
	
	public Demo() 
	{
		this.i = 10;
		this.k = 30;
	}
	
	public Demo(int a, int b)
	{
		this.i = a;
		this.k = b;
	}
	
	public void fun()
	{
		i++;  //Allowed
		//j++; //error
		//k++; //error
	}
}

class Final1
{
	public static void main(String arg[])
	{
		Demo obj = new Demo();
		obj.fun();
		System.out.println(obj.i);
		System.out.println(obj.j);
		System.out.println(obj.k);
		
		Demo obj1 = new Demo(11,21);
		System.out.println(obj1.i);
		System.out.println(obj1.j);
		System.out.println(obj1.k);
		obj1.fun();
	}
}