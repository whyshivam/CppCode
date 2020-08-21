#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b>a)
	{
			int t=b;
			b=a;
			a=t;
	}
	if(a%b==0)
	{
		return b;
	}
	else
	{
		a=a%b;
		return gcd(a,b);
	}
}
int main()
{
	int num[2019];
	memset(num,0,sizeof(num));
	long long int sum=0;
	double jk=0.000;
	for(int i=1;i<=2019;i++)
	{
		for(int j=i+1;j<=2019;j++)
		{
			int k=gcd(i,j);
		//	cout<<i<<"\t"<<j<<"\t"<<k<<endl;
			num[k-1]++;
			sum++;
		}
	}
	for(int i=0;i<2019;i++)
	{
		jk=jk+(num[i]*1.0000)/(sum*1.0000)*(i+1.000);
	}
	cout<<jk<<endl;
}
