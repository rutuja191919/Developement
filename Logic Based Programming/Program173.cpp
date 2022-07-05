#include<iostream>
using namespace std;

int Addition(int A, int B)
{
	int Ans;
    Ans = A +  B;
	return Ans;
}

int main()
{
	int iNo1 = 11, iNo2 = 21;
    int iRet = 0;

	iRet = Addition(iNo1,iNo2);

	cout<<"Addition is : "<<iRet<<endl;

	return 0;
}