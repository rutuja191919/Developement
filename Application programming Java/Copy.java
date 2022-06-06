import java.lang.*;

class Employee implements Cloneable
{
   public int EID;
   public String EName;
   public int ESalary;
   
   public Employee(int id, String name, int salary)
   {
	   this.EID = id;
	   this.EName = name;
	   this.ESalary = salary;
   }  
   
   public Object clone() throws CloneNotSupportedException
   {
	   return super.clone();
   }
}

class Copy
{
	public static void main(String args[])
	{
		Employee eobj = new Employee(11,"Rutuja",20000);
	    
		System.out.println("Employee ID :"+eobj.EID);
		System.out.println("Employee Name :"+eobj.EName);
		System.out.println("Employee Salary :"+eobj.ESalary);	
		
		try
		{
		Employee eobjX = (Employee)eobj.clone();
		}
		catch(CloneNotSupportedException obj)
		{}
		
		System.out.println("Employee ID :"+eobjX.EID);
		System.out.println("Employee Name :"+eobjX.EName);
		System.out.println("Employee Salary :"+eobjX.ESalary);	
	    
		eobj.EName = "Rohit";
		
		System.out.println("Employee ID :"+eobjX.EID);
		System.out.println("Employee Name :"+eobjX.EName);
		System.out.println("Employee Salary :"+eobjX.ESalary);	
	}
}