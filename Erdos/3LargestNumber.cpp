#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a<b)
	{
		int l=a;
		a=b;
		b=l;
	}
	if(a%b==0)
	return b;
	else if(b==1)
	return 1;
	else
	{
		int k=a%b;
		return gcd(b,k);
	}
}
int main()
{
	cout<<gcd(100,50);
	for(int i=1;i<1000;i++)
	{
		int k=2*i-1;
		int p=k+2;
		int l=gcd(k,p);
		cout<<i<<"\t"<<l<<endl;
	}
}
