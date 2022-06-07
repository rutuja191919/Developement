//Count no of spaces

#include<iostream>
using namespace std;

int CountSpaces(char str[])
{s
 int iCnt = 0;
 while(*str != '\0')
 {
  if(*str == ' ')  //if(*str == '32')..ascii value for space is 32
  {
   iCnt++;
  } 
  str++;
 } 
 return iCnt;
}

int main()
{
 char Arr[20];
 int iRet = 0;
 
 cout<<"Enter string"<<endl;
 cin.getline(Arr,20);      //Accept whole line with spaces
 
 iRet = CountSpaces(Arr);
 cout<<"Number of spaces in the string are : "<<iRet<<endl;
 
 return 0;
}
