//Convert lower to upper

#include<iostream>
using namespace std;

void StruprX(char str[])
{
 while(*str != '\0')
 {
  if((*str >= 'a')&&(*str <= 'z'))
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
 
 StruprX(Arr);
 cout<<"String in upper case is : "<<Arr<<endl;
 
 return 0;
}
