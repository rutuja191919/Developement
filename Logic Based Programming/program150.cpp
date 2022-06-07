//In place reverse string

#include<iostream>
using namespace std;

void StrrevX(char str[])
{
 char *start = str;
 char *end = str;
 char temp = '\0';
 
 while(*end != '\0')
 {
  end++;
 }
 end--;
 
 while(start < end)
 {
  temp = *start;
  *start = *end;
  *end = temp;
  
  start++;
  end--;
 } 
}

int main()
{
 char Arr[20];
 int iRet = 0;
 
 cout<<"Enter string"<<endl;
 cin.getline(Arr,20);      //Accept whole line with spaces
 
 StrrevX(Arr);
 
 cout<<"Reverse string is : "<<Arr<<endl;
 
 return 0;
}
