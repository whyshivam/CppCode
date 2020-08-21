#include<iostream>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;
int prfsqr(int a,int b)
{
	
	int h= ((a*a)+(b*b));
	int c=sqrt(h);
	int p=c+a+b;
	c=c*c;
	int k=0;
	if(c==h)
	{
		if(p<=1000)
		{
			return p;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}
int main()
{
	int p[1001];
	memset(p,0,sizeof(p));
	for(int i=1;i<=500;i++)
	{
		for(int j=i+1;j<=500;j++)
		{
			int c=prfsqr(i,j);
			if(c>0)
			{
				p[c]++;
			}
			
			
		}
	}
	int j=0;
	for(int i=0;i<=1000;i++)
	{
		int c=p[i];
		if(c>j)
		{
			j=c;
			cout<<c<<"\t"<<i<<endl;
		}
	}
	cout<<prfsqr(20,48)<<"\t"<<prfsqr(12,5)<<endl;;
	
}
