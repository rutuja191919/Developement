import java.lang.*;

class Arithmetic
{
	 public int No1,No2;
	
	 public Arithmetic(int a, int b)
	 {
		 No1 = a;
		 No2 = b;
	 }
	 public int Addition()
	 {
		 int Ans = 0;
		 Ans = No1 + No2;
		 return Ans;
	 }
}
class SpecificOOP
{
	public static void main(String arg[])
	{
		int ret = 0;
		Arithmetic obj = new Arithmetic(10,11);
		
		ret = obj.Addition();
		
		System.out.println("Addition is :"+ret);
	}
}