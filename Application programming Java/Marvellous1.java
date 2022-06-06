import java.lang.*;

interface Circle  //all the methods are abstract
{
	float PI = 3.14f;   //public static final PI = 3.14f;
	
	float CalculateArea(float Radius);  //public abstract float CalulateArea(float Radius);
	float CalculateCircumference(float Radius);
}

class Area implements Circle
{
	public float CalculateArea(float Radius)
	{
		return (PI*Radius*Radius);
	}
	
	public float CalculateCircumference(float Radius)
	{
		return (2*PI*Radius);
	}
}

class Marvellous1
{
	public static void main(String args[])
	{
		Area obj = new Area();
		float fRet = 0.0f;
		System.out.println(obj.PI);
		
		fRet = obj.CalculateArea(10.5f);
		System.out.println("Area is : " + fRet);
		
		fRet = obj.CalculateCircumference(10.5f);
		System.out.println("Circuumference is : " + fRet);
	}
}