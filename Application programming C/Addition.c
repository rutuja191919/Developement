#include<stdio.h>

int Addition(int no1, int no2)
{
    int ans=0;
    ans = no1+no2;

    return ans;
}

int main()
{
   int a=10,b=11,c=0;
   
   c=Addition(a,b);

   printf("Addition of two numbers = %d",c);

   return 0;
}