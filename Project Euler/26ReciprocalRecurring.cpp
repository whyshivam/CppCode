#include<iostream>
using namespace std;
int main()
{
for(int i=1;i<=10000;i++)
{
double k=1.0/i;
cout<<i<<"\t"<<k<<"\t";
}
}

//x=(10^m)*(10^n - 1)/((10^n - 1)*Pm + Pn)
//Pm non recurring m digit of 1/x 
//Pn recurring n digits of 1/x 
