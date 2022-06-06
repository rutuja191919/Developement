#include<iostream>
using namespace std;


class Arithmetic
{
	public:
	 int No1;
	 int No2;
	 
	 Arithmetic( int a, int b)
	 {
		 No1 = a;
		 No2 = b;
	 }
	 
	 int Addition()
	 {
		 int ans;
		 ans = No1 + No2;
		 return ans;
	 }
	 
	 int Substraction()
	 {
		 int ans;
		 ans = No1 - No2;
		 return ans;
	 }	 
};

int main()
{
	  
	 Arithmetic iobj(10,20);    
	 
	 int ret = iobj.Addition();
	 cout<<"The integer nos addition is :"<<ret<<"\n";
	  
	 return 0;
}
