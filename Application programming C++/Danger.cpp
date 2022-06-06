#include<iostream>
using namespace std;

class Employee
{
	public :
		 int iEmployeeId;
	     char cEmpName[10];
		 int iAge;
		 char cGender;
		 float fSalary;
		
		Employee()
		{
			
		}
		Employee(int e,char ch[10],int i, char c, float f)
		{
			iEmployeeId = e;
			cEmpName[10] = *ch;
			iAge = i;
			cGender = c;
			fSalary = f;
		}
		
};

    Employee getEmployeeDetails(Employee obj,int employeeId)
		{
			cout<<"Inside function\n";
			if(obj.iEmployeeId == employeeId)
			{
				cout<<"Inside if\n";
			return obj;
			}
		}
		

int main()
{
	Employee emp[2] ={{10,"Rutuja",25,'F',20000.0},
					  {12,"Rohit",28,'M',25000.0}};
	Employee emp1;
	int id = 0, j = 0;
	
    cout<<"Enter id to get details\n";
	cin>>id;
    
	for(int j = 0; j<2; j++)
	{
			cout<<"inside if\n";
			emp1 = getEmployeeDetails(emp[j],id);
	}
	
	cout<<emp1.cEmpName;
	
	
	/*char ch[] = {};
	char *ptr = ch;
	Employee emp(10,ptr,25,'F',20000.0);
	*/
	/*Employee empmain;
	char name[10] = {};
	char *nptr = name;
	int id = 0;
	int age = 0;
	char gender = ' ';
	char ch = ' ';
	float salary = 0.0;
	
	
	/*Employee *p = NULL;
	
	p = new Employee[10];
	
	do
	{
	cout<<"Enter Id\n";
	cin>>id;
	
	cout<<"Enter Name\n";
	cin>>name;
	
	cout<<"Enter Age\n";
	cin>>age;
	
	cout<<"Enter Gender\n";
	cin>>gender;
	
	cout<<"Enter salary\n";
	cin>>salary;	
	
	cout<<"Do you want to enter more details?\n";
	cin>>ch;
	
	p = new Employee(id,name,age,gender,salary);
	p++;
	
	}while(ch == 'y' || ch == 'Y');
	*/
	return 0;
}