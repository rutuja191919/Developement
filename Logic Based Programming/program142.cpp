//Count no of small letters 

#include<iostream>
using namespace std;

int CountSmall(char str[])
{
 int iCnt = 0;
 while(*str != '\0')
 {
  if((*str >= 'a') && (*str <= 'z'))
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
 
 iRet = CountSmall(Arr);
 cout<<"Number of capital characters in the string are : "<<iRet<<endl;
 
 return 0;
}
