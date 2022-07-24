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

class DBMS
{
    public LinkedList<Student> lobj;

    DBMS()
    {
        lobj = new LinkedList<>();
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous Customized DBMS started successfully!");
    }

    public void InsertData(String str,int value)
    {
        Student sobj = new Student(str,value);
        lobj.add(sobj);
    }

    //DisplayAll without condition
    public void DisplayAll()
        {
            for(Student sref : lobj)
            {
                sref.DisplayData();
            }
        }
    
    //Display by RID
    public void DisplaySpecific(int rid)
    {
        for(Student sref : lobj)
        {
            if(sref.RID == rid)
            {
                sref.DisplayData();
                break;
            }
        }
    }

   //Display by name
    public void DisplaySpecific(String name)
    {
        for(Student sobj : lobj)
        {
            if(name.equals(sobj.Name))
            {
                sobj.DisplayData();
            }
        }
    }

   //Delete by RID
    public void DeleteSpcific(int rid)
    {
        int index = 0;
        for(Student sref : lobj)
        {
            if(sref.RID == rid)
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

    //Delete by name
    public void DeleteSpcific(String str)
    {
        int index = 0;
        for(Student sref : lobj)
        {
            if(str.equals(sref.Name))
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

    //Maximum salary from the linked list
    public void AggregateMax()
    {
        int iMax = 0;
        Student temp = null;

        for(Student sref : lobj)
        {
            if(sref.Salary > iMax)
            {
                iMax = sref.Salary;
                temp = sref;
            }
        }
        System.out.println("Information of student with the maximum salary is :");
        temp.DisplayData();
    }

    //Minimum salary from the linked list
    public void AggregateMin()
    {
        int iMin = (lobj.getFirst()).Salary;
        Student temp = lobj.getFirst();

        for(Student sref : lobj)
        {
            if(sref.Salary < iMin)
            {
                iMin = sref.Salary;
                temp = sref;
            }
        }
        System.out.println("Information of student with the minimum salary is :");
        temp.DisplayData();
    }

    //Sum 
    public void AggregateSum()
    {
        long iSum = 0;

        for(Student sref : lobj)
        {
            iSum = iSum + sref.Salary;
        }
        System.out.println("Summation of salaries is :"+iSum);
    }

    public void AggregateAvg()
    {
        long iSum = 0;

        for(Student sref : lobj)
        {
            iSum = iSum + sref.Salary;
        }
        System.out.println("Average salary is :"+iSum/ (lobj.size()));
    }

    public void AggregateCount()
    {
        System.out.println("Count is "+lobj.size());
    }
}

class Program277
{
    public static void main(String args[])
    {
       DBMS dobj = new DBMS();
       dobj.StartDBMS();
       dobj.InsertData("Piyush",2000);
       dobj.InsertData("Rutuja",4000);
       dobj.InsertData("Sakshi",8000);
       dobj.InsertData("Sachin",6000);
       dobj.InsertData("Suraj",10000);
      // dobj.DisplaySpecific(2);
      // dobj.DisplaySpecific("Piyush");
      // dobj.DeleteSpcific(2);
      // dobj.DeleteSpcific("Piyush");
       dobj.AggregateMax();
       dobj.AggregateMin();
       dobj.AggregateSum();
       dobj.AggregateAvg();
       dobj.AggregateCount();
    }
}