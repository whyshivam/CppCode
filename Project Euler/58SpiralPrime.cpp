#include<iostream>
using namespace std;
#include<bits/stdc++.h>
bool pr(long long int n)
{
	bool fl=true;
	for(long long int i=2;i*i<n;i++)
	{
		if(n%i==0)
		{
			fl=false;
			break;
		}
	}
	return fl;
}
int nxtpr(int n)
{
	if(n==2)
	{
		return 3;
	}
	else
	{
		int h=n+2;
		while(pr(h)==false)
		{
			h+=2;
		}
		return h;
	}
}
int main()
{
	int num[500000];
	memset(num,0,sizeof(num));
	int c=0;
	for(int i=2;i<500000;i++)
	{
		if(num[i]==0)
		{
			c++;
			num[i]=c;
			//cout<<c<<"\t"<<i<<endl;
			for(int j=2*i;j<500000;j+=i)
			{
				num[j]=-1;
			}
		}
	}
	int k=100;
	int i=3;
	int count =0;
	while(k>=10)
	{
		long long int l=i*i;
		long long int n1=l-(i-1);
		long long int n2=n1-i+1;
		long long int n3=n2-i+1;
		//int p2=nxtpr(l);
		//cout<<p<<"\n";
		long long int p=2*(i-1)+1;
		if(pr(n1)==true)
		count++;
		if(pr(n2)==true)
		count++;
		if(pr(n3)==true)
		count++;
		k=(count*100)/p;
		cout<<k<<"\t"<<p<<"\t"<<count<<"\t"<<i<<"\t"<<l<<endl;
		i=i+2;
		
	}
}
