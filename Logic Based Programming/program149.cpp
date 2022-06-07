//toggle

#include<iostream>
using namespace std;

void StrtoggleX(char str[])
{
 while(*str != '\0')
 {
  if((*str >= 'A')&&(*str <= 'Z'))
  {
   *str = *str + 32;
  } 
  
  else if((*str >= 'a')&&(*str <= 'z'))
  {
   *str = *str - 32;
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
 
 StrtoggleX(Arr);
 
 cout<<"String in toggle case is : "<<Arr<<endl;
 
 return 0;
}
