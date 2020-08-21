#include<iostream>
using namespace std;
int timediv(long long int n )
{
	long long int q=998244353;
	int c=0;
	while(q>n)
	{
		c++;
		q/=n;
	}
	return c;
}
int main()
{
	long long int k=1;
	long long int l=31595;
	for(long long int i=2;i<=l;i++)
	{
		k+=timediv(i);
	//	if(i%1000000==0)
		cout<<k<<"\t"<<i<<"\t\t";
	}
	int p= 998244353-l;
	cout<<k<<"\t"<<(p+k);
}
