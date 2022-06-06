#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{
	public:
	 T No1;
	 T No2;
	 
	 Arithmetic( T a, T b)
	 {
		 No1 = a;
		 No2 = b;
	 }
	 
	 T Addition()
	 {
		 T ans;
		 ans = No1 + No2;
		 return ans;
	 }
	 
	 T Substraction()
	 {
		 T ans;
		 ans = No1 - No2;
		 return ans;
	 }	 
};

int main()
{
	  
	 Arithmetic <int>iobj(10,20);    //1st class for integer datatype
	 
	 int ret = iobj.Addition();
	 cout<<"The integer nos addition is :"<<ret<<"\n";
	 
	 Arithmetic <double>dobj(10.5,11.9);  //2nd class for double datatype
	 
	 double dret = dobj.Addition();
	 cout<<"The double nos addition is :"<<dret<<"\n";
	  
	 return 0;
}
