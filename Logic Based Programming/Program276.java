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

    public void DisplayAll()
        {
            for(Student sref : lobj)
            {
                sref.DisplayData();
            }
        }
    
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
}

class Program276
{
    public static void main(String args[])
    {
       DBMS dobj = new DBMS();
       dobj.StartDBMS();
       dobj.InsertData("Piyush",2000);
       dobj.InsertData("Rutuja",4000);
       dobj.InsertData("Sakshi",5000);
       dobj.DisplaySpecific(2);
       dobj.DisplaySpecific("Piyush");
    }
}