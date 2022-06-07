//copy string

#include<iostream>
using namespace std;

void StrcpyX(char *src, char *dest)
{
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
 
 cout<<"Enter string"<<endl;
 cin.getline(Arr,20);      //Accept whole line with spaces
 
 StrcpyX(Arr, Brr);
 
 cout<<"Original string is : "<<Arr<<endl;
 cout<<"Copied string is : "<<Brr<<endl;
 
 return 0;
}
