#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<math.h>
bool prfsqr(long long int n)
{
	double k=pow(n,0.5);
	long long int h=k;
	h*=h;
	if(h==n)
	{
		return true;
	}
	else
	return false;
}
int main()
{
	long long int n=500000;
	int num[n];
	int c=0;
	memset(num,0,sizeof(num));
	
	for(long long int i=2;i<n;i++)
	{
		if(num[i]>=0)
		{
			c++;
			num[i]=c;
			for(long long int j=2*i;j<n;j+=i)
			{
				num[j]=-1;
			}
		}
	}
	for(int i=5;i<n;i+=2)
	{
		if(num[i]<=0)
		{
			int t=1;
			for(int j=3;j<i;j+=2)
			{
				 
				if(num[j]>0)
				{
					long long int h=(i-j)/2;
					if(prfsqr(h)==true)
					{
						t=0;
						break;
					}
				}
			}
			if(t==1)
			{
				cout<<i<<"\n";
				break;
			}
		}
		
		
	}
}
