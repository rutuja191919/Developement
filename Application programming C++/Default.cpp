#include<iostream>
using namespace std;

float Area(float iRadius, float PI = 3.14)
{
	float area = 0.0;
	
	area = PI * iRadius * iRadius;
	
	return area;
	
}
int main()
{
	float iRadius = 2.3;
	float iRet = 0.0;
	
	iRet = Area(iRadius,7.2);
	cout<<"Area with PI Value 7.2 : "<<iRet<<"\n";
	
	iRet = Area(iRadius);
	cout<<"Area with PI default Value : "<<iRet<<"\n";
	
	return 0;
}