#include<iostream>
using namespace std;

class Pattern
{
  private:
   int iRow;
   int iCol;
   
  public:
    Pattern(int a, int b)
    {
     this->iRow = a;
     this->iCol = b;
    }
    
    void DisplayPattern()
    {
     int i = 0, j = 0;
     for(i = 1; i <= iRow ;i++)
     {
      for(j = 1; j <= iCol ; j++)
      {
       printf("*\t");
      }
      printf("\n");
     }
    }
};

int main()
{
 Pattern pobj(4,4);
 
 pobj.DisplayPattern();
 
 return 0;
}
