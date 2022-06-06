#include<iostream>
using namespace std;

class Number
{
public:
 int Factorial(int iNo)
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
 int iValue = 0;
 int iRet = 0;
 
 cout<<"Enter the number\n";
 cin>>iValue;
 
 iRet = nobj.Factorial(iValue);
 cout<<"Factorial is :"<<iRet<<endl;
 
 return 0;
}
