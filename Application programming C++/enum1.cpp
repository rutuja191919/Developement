#include<iostream>
using namespace std;

int main()
{
	int input = 0;
	char input1[6];
	
	//          0   1   2   3   4   5   6  values
	enum Days {Sun,Mon,Tue,Wed,Thus,Fri,Sat};
	
	enum Days obj;
	
	obj = Tue;
	
	cout<<obj<<"\n";
	cout<<sizeof obj<<"\n";
	
	enum Gender {Female = 1, Male = 2};
	
	cout<<"Enter your gender\n";
	cout<<"1 : Female";
	cout<<"2 : Male";
	
	cin>>input;
	
	switch(input)
	{
		case Female:
			cout<<"Tax free limit is 3,00,000\n";
			break;
			
		case Male:
			cout<<"Tax free limit is 2,50,000\n";
			break;
	}
	return 0;
}