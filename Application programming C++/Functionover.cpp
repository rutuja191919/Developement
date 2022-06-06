#include<iostream>
using namespace std;

class Demo
{
	public : //no abstraction
	
	//Addition@2ii    compiler internally converts that function to 
	 int Addition(int no1,int no2)
	 {
		 int ans = 0;
		 ans = no1+no2;
		 return ans;
	 }
	
	//Addition@3iii   name mangling. compiler depends
	 int Addition(int no1,int no2, int no3)
	 {
		 int ans = 0;
		 ans = no1+no2+no3;
		 return ans;
	 }
	  
	//Addition@4iiii naming decoration
	 int Addition(int no1,int no2,int no3,int no4)
	 {
		 int ans = 0;
		 ans = no1+no2+no3+no4;
		 return ans;
	 }
};

int main()
{
	Demo obj;
	int ret = 0;
	
	//PUSH 10
	//PUSH 20
	//CALL 1000
	ret = obj.Addition(10,20);    //obj.Addition@2ii(10,20)  ii means integer, integer
	cout<<"Addition of two nos : "<<ret<<"\n";
	
	//PUSH 20
	//PUSH 30
	//PUSH 40
	//CALL 2000
	ret= obj.Addition(20,30,40);  //obj.Addition@3iii(20,30,40)
	cout<<"Addition of three nos : "<<ret<<"\n";
	
	//PUSH 40
	//PUSH 50
	//PUSH 60
	//PUSH 70
	//CALL 3000
	ret = obj.Addition(40,50,60,70);  //obj.Addition@4iiii(40,50,60,70)
	cout<<"Addition of four nos : "<<ret<<"\n";
	
	return 0;
}