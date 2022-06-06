#include<iostream>
using namespace std;

class Number
{
 private:
 int iNo;    //Characteristics
 
 public:
 void Accept()  //setter method
 {
  cout<<"Enter the value\n";
  cin>>this->iNo;
 }
 
 void Display() //getter method
 {
  cout<<"Value is : "<<this->iNo<<endl;
 }
 
 int Factorial()
 {
  register int iCnt = 0;
  int iFact = 1;
 
  for(iCnt = iNo; iCnt >=1; iCnt--)
  {
   //iFact = iFact * iCnt;
   iFact *= iCnt;
  }
 
  return iFact;
 }
};

int main()
{
 Number nobj;

 int iRet = 0;
 
 //cout<<nobj.iNo;  iNo is private variable
 
 nobj.Accept();
 nobj.Display();
 
 iRet = nobj.Factorial();
 cout<<"Factorial is : "<<iRet<<endl;   
 
 //In OOP multiple objects can have their own characteristic that is the power of OOP 
 
 return 0;
}
