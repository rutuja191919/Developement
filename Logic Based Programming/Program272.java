import java.lang.*;
import java.util.*;

//create table student(RID int, Name varchar(255), Salary int)
//Database table : schema
class Student
{
    public int RID;
    public String Name;
    public int Salary;

    private static int Generator;
    static
    {
        Generator = 0;
    }

    public Student(String str, int value)
    {
        this.RID = ++Generator;
        this.Name = str;
        this.Salary = value;
    }

    public void DisplayData()
    {
        System.out.println(this.RID + "\t" + this.Name + "\t" +this.Salary);
    }
}
class Program272
{
    public static void main(String args[])
    {
        Student obj1 = new Student("Rutuja",1000);
        Student obj2 = new Student("Rohit",3000);
        Student obj3 = new Student("Shubham",5000);

        obj1.DisplayData();
        obj2.DisplayData();
        obj3.DisplayData();
    }
}