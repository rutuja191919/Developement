import java.lang.*;

//template <class T>
class Arithmetic <T>
{
	 public T Addition(T No1, T No2)
	 {
		 if(No1 instanceof Integer && No2 instanceof Integer)
		 {
   		     return (T)(Integer)((Integer)No1 + (Integer)No2);
		 }
		 else if(No1 instanceof Float && No2 instanceof Float)
		 {
			 return (T)(Float)((Float)No1 + (Float)No2);
		 }
		 else if(No1 instanceof Double && No2 instanceof Double)
		 {
			 return (T)(Double)((Double)No1 + (Double)No2);
     	 }
		 else
		 {
			 return null;
		 }
	 }
}
class Generic
{
	public static void main(String arg[])
	{
		Integer ret = 0;
		Arithmetic <Integer>obj = new Arithmetic<Integer>();
		ret = obj.Addition(10,11);
		System.out.println("Addition is :"+ret);

		Float ret1 = 0.0f;
		Arithmetic <Float>fobj = new Arithmetic<Float>();
		ret1 = fobj.Addition(10.1f,11.3f);
		System.out.println("Addition is :"+ret1);
	}
}