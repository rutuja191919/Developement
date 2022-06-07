//Convert upper to lowers

#include<iostream>
using namespace std;

void StrlwrX(char str[])
{
 while(*str != '\0')
 {
  if((*str >= 'A')&&(*str <= 'Z'))
  {
   *str = *str + 32;
  } 
  str++;
 } 
}

int main()
{
 char Arr[20];
 int iRet = 0;
 
 cout<<"Enter string"<<endl;
 cin.getline(Arr,20);      //Accept whole line with spaces
 
 StrlwrX(Arr);
 cout<<"String in lower case is : "<<Arr<<endl;
 
 return 0;
}
