//Count no of capital letters 

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
 int iCnt = 0;
 while(*str != '\0')
 {
  if((*str >= 'A') && (*str <= 'Z'))
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
 
 iRet = CountCapital(Arr);
 cout<<"String contains capital letters : "<<iRet<<endl;
 
 return 0;
}
