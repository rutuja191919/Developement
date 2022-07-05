//string comparisions

#include<iostream>
using namespace std;

bool StrcmpX(char *src, char *dest)
{
 while((*src != '\0'))
 {
  if(*src != *dest)
  {
   break;
  }
  src++;
  dest++;
 }
 if(*src == '\0')
 {
  return true;
 } 
 else
 {
  return false;
 }
}

int main()
{
 char Arr[20], Brr[20];
 bool bRet = false;
 
 cout<<"Enter First string"<<endl;
 cin.getline(Arr,20);      //Accept whole line with spaces
 
 cout<<"Enter Second string"<<endl;
 cin.getline(Brr,20);      //Accept whole line with spaces
 
 bRet = StrcmpX(Arr, Brr);
 
 if(bRet == true)
 {
  cout<<"Strings are same"<<endl;
 }
 else
 {
  cout<<"Strings are different"<<endl;
 }
 
 return 0;
}
