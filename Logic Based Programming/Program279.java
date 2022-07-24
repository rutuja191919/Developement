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
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Marvellous Customized DBMS started successfully!");
        String query = "";

        while(true)
        {
            System.out.print("Marvellous DBMS console >");
            query = scanobj.nextLine();

            String tokens[] = query.toLowerCase().split(" ");

            int querySize = tokens.length;

            if(querySize == 1)
            {
                if("help".equals(tokens[0]))
                {
                    System.out.println("-------------------------------------------------------------------");
                    System.out.println("This application is used to demonstrates the customized DBMS");
                    System.out.println("Exit : Terminate DBMS");
                    System.out.println("Display all data : select * from student");
                    System.out.println("Insert Data : Insert into student Name Salary");
                    System.out.println("Display data by rid : select * from student where rid = enter_rid");
                    System.out.println("Display data by name : select * from student where name = enter_name");
                    System.out.println("Delete data by rid : delete from student where rid = enter_rid");
                    System.out.println("Delete data by name : delete from student where name = enter_name");
                    System.out.println("Aggregate MAX function : select max salary from student");
                    System.out.println("Aggregate MIN function: select min salary from student");
                    System.out.println("Aggregate AVG function : select avg salary from student");
                    System.out.println("Aggregate SUM function : select sum salary from student");
                    System.out.println("Aggregate COUNT function : select count salary from student");
                    System.out.println("Update name : update student set name = enter_new_name where rid = enter_rid");
                    System.out.println("Update salary : update student set salary = enter_new_salary where rid = enter_rid");
                    System.out.println("-------------------------------------------------------------------");
                }
                else if("exit".equals(tokens[0]))
                {
                    System.out.println("Thank you for using Marvellous Customized DBMS");
                    break;
                }
                else
                {
                    System.out.println("Invalid Query");
                }
            }
            else if(querySize == 4)
            {
                if("select".equals(tokens[0]))
                {
                    if("*".equals(tokens[1]))
                    {
                        DisplayAll();
                    } 
                    else if("name".equals(tokens[1]))
                    {
                        DisplayNames();
                    }
                    else if("rid".equals(tokens[1]))
                    {
                        DisplayRids();
                    }
                    else if("salary".equals(tokens[1]))
                    {
                        DisplaySalaries();
                    }
                }
            }
            else if(querySize == 5)
            {
                if("insert".equals(tokens[0]))
                {
                    InsertData(tokens[3],Integer.parseInt(tokens[4]));
                    System.out.println("Record inserted successfully!");
                }
                else if("select".equals(tokens[0]))
                {
                    if("max".equals(tokens[1]))
                    {
                        AggregateMax();
                    }
                    else if("min".equals(tokens[1]))
                    {
                        AggregateMin();
                    }
                    else if("avg".equals(tokens[1]))
                    {
                        AggregateAvg();
                    }
                    else if("sum".equals(tokens[1]))
                    {
                        AggregateSum();
                    }
                    else if("count".equals(tokens[1]))
                    {
                        AggregateCount();
                    }
                }
            }
            else if(querySize == 7)
            {
                if("rid".equals(tokens[4]))
                {
                    DeleteSpcific(Integer.parseInt(tokens[6]));
                    System.out.println("Record deleted successfully!");
                }
                else if("name".equals(tokens[4]))
                {
                    DeleteSpcific(tokens[6]);
                    System.out.println("Record deleted successfully!");
                }
            }
            else if(querySize == 8)
            {
                if("rid".equals(tokens[5]))
                {
                    DisplaySpecific(Integer.parseInt(tokens[7]));
                }
                else if("name".equals(tokens[5]))
                {
                    DisplaySpecific(tokens[7]);
                }
            }
            else if(querySize == 10)
            {
                if("update".equals(tokens[0]))
                {
                    if("name".equals(tokens[3]))
                    {
                        UpdateSpecific(Integer.parseInt(tokens[9]),tokens[5]);
                        System.out.println("Record updated successfully!");
                    }
                    if("salary".equals(tokens[3]))
                    {
                        UpdateSpecific(Integer.parseInt(tokens[9]),Integer.parseInt(tokens[5]));
                        System.out.println("Record updated successfully!");
                    }
                }
            }
            else
            {
                System.out.println("Invalid Query");
            }
        }
    }
    public void InsertData(String str,int value)
    {
        Student sobj = new Student(str,value);
        lobj.add(sobj);
    }

    //DisplayAll without condition
    public void DisplayAll()
        {
            System.out.println("-------------------------------------------------------------------");
            System.out.println("RID\tNAME\tSALARY");
            System.out.println("-------------------------------------------------------------------");
            for(Student sref : lobj)
            {
                sref.DisplayData();
            }
            System.out.println("-------------------------------------------------------------------");
        }
    
    //Display by RID
    public void DisplaySpecific(int rid)
    {
        System.out.println("-------------------------------------------------------------------");
        System.out.println("RID\tNAME\tSALARY");
        System.out.println("-------------------------------------------------------------------");
        for(Student sref : lobj)
        {
            if(sref.RID == rid)
            {
                sref.DisplayData();
                break;
            }
        }
        System.out.println("-------------------------------------------------------------------");
    }

   //Display by name
    public void DisplaySpecific(String name)
    {
        System.out.println("-------------------------------------------------------------------");
        System.out.println("RID\tNAME\tSALARY");
        System.out.println("-------------------------------------------------------------------");
        for(Student sobj : lobj)
        {
            if(name.equals(sobj.Name))
            {
                sobj.DisplayData();
            }
        }
        System.out.println("-------------------------------------------------------------------");
    }

    //Display only names
    public void DisplayNames()
    {
        System.out.println("-------------------------------------------------------------------");
        System.out.println("NAME");
        System.out.println("-------------------------------------------------------------------");
        for(Student sobj : lobj)
        {
            System.out.println(sobj.Name);
        } 
        System.out.println("-------------------------------------------------------------------");
    }

    //Display only rid
    public void DisplayRids()
    {
        System.out.println("-------------------------------------------------------------------");
        System.out.println("RID");
        System.out.println("-------------------------------------------------------------------");
        for(Student sobj : lobj)
        {
            System.out.println(sobj.RID);
        } 
        System.out.println("-------------------------------------------------------------------");  
    }

    //Display only salaries
    public void DisplaySalaries()
    {
        System.out.println("-------------------------------------------------------------------");
        System.out.println("SALARY");
        System.out.println("-------------------------------------------------------------------");
        for(Student sobj : lobj)
        {
            System.out.println(sobj.Salary);
        }
        System.out.println("-------------------------------------------------------------------");
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

    //Update name by rid
    public void UpdateSpecific(int rid, String str)
    {
        for(Student sref : lobj)
        {
            if(sref.RID == rid)
            {
                sref.Name = str;
            }
        }
    }

    //Update salary by rid
    public void UpdateSpecific(int rid, int salary)
    {
        for(Student sref : lobj)
        {
            if(sref.RID == rid)
            {
                sref.Salary = salary;
            }
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
        System.out.println("-------------------------------------------------------------------");
        System.out.println("RID\tNAME\tSALARY");
        System.out.println("-------------------------------------------------------------------");
        temp.DisplayData();
        System.out.println("-------------------------------------------------------------------");
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
        System.out.println("-------------------------------------------------------------------");
        System.out.println("RID\tNAME\tSALARY");
        System.out.println("-------------------------------------------------------------------");
        temp.DisplayData();
        System.out.println("-------------------------------------------------------------------");
    }

    //Sum 
    public void AggregateSum()
    {
        long iSum = 0;

        for(Student sref : lobj)
        {
            iSum = iSum + sref.Salary;
        }
        System.out.println("-------------------------------------------------------------------");
        System.out.println("sum");
        System.out.println("-------------------------------------------------------------------");
        System.out.println(iSum);
        System.out.println("-------------------------------------------------------------------");
    }

    public void AggregateAvg()
    {
        long iSum = 0;

        for(Student sref : lobj)
        {
            iSum = iSum + sref.Salary;
        }
        System.out.println("-------------------------------------------------------------------");
        System.out.println("average");
        System.out.println("-------------------------------------------------------------------");
        System.out.println(iSum/ (lobj.size()));
        System.out.println("-------------------------------------------------------------------");
    }

    public void AggregateCount()
    {
        System.out.println("-------------------------------------------------------------------");
        System.out.println("count");
        System.out.println("-------------------------------------------------------------------");
        System.out.println(lobj.size());
        System.out.println("-------------------------------------------------------------------");       
    }
}

class Program279
{
    public static void main(String args[])
    {
       DBMS dobj = new DBMS();
       dobj.StartDBMS();
       //dobj.InsertData("Piyush",2000);
      // dobj.InsertData("Rutuja",4000);
      // dobj.InsertData("Sakshi",8000);
      // dobj.InsertData("Sachin",6000);
      // dobj.InsertData("Suraj",10000);
      // dobj.DisplaySpecific(2);
      // dobj.DisplaySpecific("Piyush");
      // dobj.DeleteSpcific(2);
      // dobj.DeleteSpcific("Piyush");
      // dobj.AggregateMax();
      // dobj.AggregateMin();
      // dobj.AggregateSum();
      // dobj.AggregateAvg();
      // dobj.AggregateCount();
    }
}