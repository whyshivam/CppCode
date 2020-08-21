#include <iostream>
#include <string>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
string sti(long long int n)
{
	
	string p="";
	if(n==0)
	{
		p="0";
	}
	else
	{
		long long int h=n;
		while(h>0)
		{
			int k=h%10;
			k=k+48;
			h/=10;
			char l=(char)k;
			p=l+p;
		}
	}
	return p;
}
string cub(long long int n)
{
	long long int k=n*n*n;
	long long int h=k;
	string l=" "+sti(k)+" "+sti(n);
	int num[10]={0,0,0,0,0,0,0,0,0,0};
	//memset(num,0,sizeof(num));
	while(h>0)
	{
		int p=h%10;
		h/=10;
		num[p]++;
	}
	for(long long int i=9;i>=0;i--)
	{
		l=sti(num[i])+l+"";
		
	}
	return l;
}
bool pal(string n, string m)
{
	bool fl=true;
	for(int i=0;i<=9;i++)
	{
		if(n[i]!=m[i])
		{
			fl=false;
			break;
		}
	}
	return fl;
}
int main()
{
	string p[10000];
	unsigned long long int c=0;
	for(long long int i=0;i<10000;i++)
	{
		long long int h=i*i*i;
		if(h<c)
		{
			break;
		}
		c=h;
		p[i]=cub(i);
	}
	
  	int z = sizeof(p)/sizeof(p[0]);
	sort(p,p+z);
	for(int i=0;i<10000;i++)
	{
		int j=1;
		while(pal(p[i],p[i+j])==true)
		{
			if(j==4)
			{
				cout<<i<<"\t"<<p[i]<<"\t"<<p[i+1]<<"\t"<<p[2+i]<<endl;
				break;
			}
			j++;
		}
	}
}
