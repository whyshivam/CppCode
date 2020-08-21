#include<iostream>
#include<math.h>
using namespace std;
bool prfsqr(long long int n)
{
	long long int i=pow(n,0.5);
	if(n==i*i)
	{
		return true;
	}
	else
	return false;
}
bool pf(long long int n,long long int j)
{
	long long int k=n/j;
	if(n%j==0)
	{
		return true;
	}
	else 
	return false;
}
int main()
{
	long long int c=0;
	long long int n2=0;
	for(long long int i=100000;i>1;i--)
	{
		long long int y;
		for(long long int j=pow(i+1,0.5);j>0;j++)
		{
			y=j*j-1;
			if(y%i==0)
			{
				y=y/i;
				if(prfsqr(y))
				{
					if(c<j)
					{
						c=j;
						n2=i;
						cout<<c<<"\t"<<n2<<"\n";
					}
					break;
				}
			}
		}
		
	}
	cout<<n2<<"\t"<<c<<"\n";
}
