import java.lang.*;

class Employee  //class Employee extends Object
{
	 public String Name;
	 public int Salary;
	 
	 public Employee(String str, int no)
	 {
		 this.Name = str;
		 this.Salary = no;
	 }
	 
	 public String toString()
	 {
		 return "Employee name is "+Name+" having salary "+Salary;
	 }
}

class Object1
{
	public static void main(String arg[])
	{
		Employee eobj = new Employee("Rutuja",21000);
		
		System.out.println(eobj.toString());
	}
}