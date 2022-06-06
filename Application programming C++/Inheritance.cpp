#include<iostream>
using namespace std;

class base1
{
  public:
    int i;
    float f;
    
    base1()
    {
      cout<<"Inside base1\n";
    }
    void gun()
    {
      cout<<"base1 gun\n";
    }
};

class base2
{
  public:
    int j;
    float g;
    
    base2()
    {
      cout<<"Inside base2\n";
    }
    
    void fun()
    {
      cout<<"base2 fun\n";
    }
};

class derived : public base2,base1
{
  public:
    int i;
    double d;
   
    derived()
    {
      cout<<"Inside derived\n";
    }
    void sun()
    {}
    
    void fun()
    {}
};

int main()
{
  derived dobj;
  
  cout<<sizeof(base1)<<"\n";
  cout<<sizeof(base2)<<"\n";
  cout<<sizeof(derived)<<"\n";
  
  dobj.gun();
  
  dobj.base1::i = 10;
  cout<<dobj.base1::i<<"\n";
  
  dobj.f = 11.21;
  cout<<dobj.f<<"\n";
  
 /* dobj.base2::j = 41;
  cout<<dobj.base2::j<<"\n";
 /* 
  dobj.g= 65.54;
  cout<<dobj.g<<"\n";
  
  dobj.derived::i = 10;
  cout<<dobj.derived::i<<"\n";
  
  dobj.d = 10.89;
  cout<<dobj.d<<"\n";

  */
  return 0;
}
