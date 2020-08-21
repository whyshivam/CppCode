#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
long long int rplc(long long int n,int m, int m5)
{
	long long int h=n;
	long long int p=0;
	int i=0;
	while(h>0)
	{
		int k=h%10;
		if(k==m)
		{
			k=m5;
		}
		h/=10;
		p=k*pow(10,i)+p;
		i++;
	}
	return p;
}
bool pr(long long int n)
{
	bool flg=true;
	for(long long int i=2;i*i<n;i++)
	{
		if(n%i==0)
		{
			flg=false;
			break;
		}
	}
	return flg;
}
long long int nxtpr(long long int n)
{
	long long int h=n+1;
	while(pr(h)==false)
	{
		h++;
	}
	return h;
}
int main()
{
	long long int n=500000;
	bool num[n];
	memset(num,true,sizeof(num));
	int c=41538;
	long long int prnum[c];
	c=0;
	for(long long int i=2;i<n;i++)
	{
		if(num[i]==true)
		{
			prnum[c]=i;
			c++;
			for(int j=i*2;j<n;j+=i)
			{
				num[j]=false;
			}
		}
	}
	//8434202404
		long long int h=prnum[c];
	for(int i=c;;h=nxtpr(h))
	{
		for(int j=0;j<3;j++)
		{
			int count =1;
			for(int k=j+1;k<=9;k++)
			{
				long long int n2=rplc(h,j,k);
				if(h!=n2)
				{
					if(pr(n2)==true)
					{
						count++;
						if(count>6)
						{			
						//	cout<<"Progress\t"<<h<<"\t"<<j<<"\t"<<k<<"\t"<<count<<endl;
							
						}
					}
				}
				else
				{
					goto jbk;
				}
				if(k-j-count>3)
				{
					goto jbk;
				}
			}
			jbk: 
			if(count==8)
			{
				cout<<h;
				goto endit;
			}
		}
	}
	endit:
		;
}
