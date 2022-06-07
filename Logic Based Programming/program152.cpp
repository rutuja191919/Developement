//string concatenation in second string

#include<iostream>
using namespace std;

void StrcatX(char *src, char *dest)
{
 while(*dest != '\0')
 {
  dest++;
 }
 
 while(*src != '\0')
 {
  *dest = *src; 
  
  src++;
  dest++;
 }
 *dest = '\0';
}

int main()
{
 char Arr[20], Brr[20];
 int iRet = 0;
 
 cout<<"Enter First string"<<endl;
 cin.getline(Arr,20);      //Accept whole line with spaces
 
 cout<<"Enter Second string"<<endl;
 cin.getline(Brr,20);      //Accept whole line with spaces
 
 StrcatX(Arr, Brr);
 
 cout<<"Concatenated string is : "<<Brr<<endl;
 
 return 0;
}
