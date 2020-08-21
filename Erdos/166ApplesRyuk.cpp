#include<iostream>
#include<cmath>
using namespace std;
long long int pow2(int n)
{
	long long int pro=1;
	for(int i=1;i<=n;i++)
	{
		pro*=2;
	}
	return pro;
}
int sumDigi(long long int n)
{
	int s=0;
	while(n>0)
	{
		int r=n%10;
		n/=10;
		s+=r;
	}
	return s;
}
long long int fermat(int n)
{
	int o=pow2(n);
	long long int l=pow2(o);
	return (l+1);  
}
int main()
{
	for(int i=1;i<10;i++)
	{
		long long int k=(fermat(i));
		int l=sumDigi(k);
		int p=l%9;
		cout<<k<<"\t\t"<<l<<"\t"<<p<<endl;
	}
}
