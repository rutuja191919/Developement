#include<iostream>
using namespace std;

int main()
{
	int arr[] = {20,10,30,40};
	int no = 11;
	int *p = &no;
	
	int *(&q) = p;   //reference to pointer 
	int (&arr1)[4] = arr;  //reference to array
	
	//int &x = no;
	//int &y = no;
	
	//int *p = &x;
	
	
	return 0;
}