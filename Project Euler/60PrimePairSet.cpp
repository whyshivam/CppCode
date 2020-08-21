#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
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
int siznum(long long int n)
{
	long long int h=n;
	long long int i=0;
	while(h>0)
	{
		h/=10;
		i++;
	}
	return i;
}
bool pairset(long long int n[],int m)
{

	bool fl=true;
	for(long long int i=0;i<m;i++)
	{
		for(long long int j=0;j<m;j++)
		{
			if(j==i)
			{
				continue;
			}
			long long int k=pow(10,siznum(n[i]))*n[j]+n[i];
			if(pr(k)==false)
			{
				fl=false;
				goto end;
			}
		}
	}
	end:
		return fl;
}
int main()
{
	long long int pset[5];
	bool num[100000];
	long long int prc[41538];
	memset(num,true,sizeof(num));
	int c=0;
	
	for(long long int i=2;i<500000;i++)
	{
		if(num[i]==true)
		{
			prc[c]=i;
			c++;
			
			//cout<<c<<"\t"<<i<<"\t\t";
			for(int j=2*i;j<500000;j+=i)
			{
				num[j]=false;
			}
		}
	}
	int r1=0,r2=0;
	for(long long int i=1;i<c;i++)
	{
		
	st:
		pset[r1]=prc[i];
		if(pairset(pset,1+r1)==true)
		{
			cout<<pset[r1]<<"\t"<<r1<<"\tif1\n";
			r1++;
			r2=i;
		}
		/*if(i==c-1)
		{
			i=r2+1;
			cout<<"Error in r1"<<"\t"<<r1<<endl;
			r1=r1-1;
			goto st;
			
		}*/
		if(r1==5)
		{
			cout<<pset[4]<<endl;
			break;
		}
		
		
		
	}
	end:
		cout<<pset[0]<<"\t"<<pset[2]<<endl;
	
}
