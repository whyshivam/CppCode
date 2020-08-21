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
int sizenum(long long int n)
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
bool pairpr(int n,int m)
{
	bool fl=false;
	long long int t= n*(pow(10,sizenum(m)))+m;
	if(pr(t)==true)
	{
		t= m*(pow(10,sizenum(n)))+n;
		if(pr(t)==true)
		fl=true;
	}
	return fl;
}
bool rqpr(int n[],int k)
{
	bool fl=true;

	for(int i=0;i<k-1;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			if(pairpr(n[i],n[j])==false)
			{
				fl=false;
				break;
			}
			
		}
	}
	return fl;
}


int main()
{
	int num[10000];
	for(int i=0;i<10000;i++)
	{
		num[i]=1;
	}
	num[0]=0;
	num[1]=0;
	int c=0;
	int prnum[1229];
	for(int i=2;i<10000;i++)
	{
		if(num[i]==1)
		{
			for(int j=2*i;j<10000;j+=i)
			{
				num[j]=0;
			}
			prnum[c]=i;
			c++;
			num[i]=c;
		}
		
	}
	int reqnum[5];
	int cr=1;
	for(int i=0;i<c;)
	{
		reqnum[cr-1]=prnum[i];
		if(rqpr(reqnum,cr)==true)
		{
			if(cr==5)
			{
				break;
			}
			cr++;
			i=num[reqnum[cr-2]];
		}	
		if(i==c-1)
		{
			if(cr==1)
			{
				reqnum[0]=0;
				reqnum[1]=0;
				reqnum[2]=0;
				reqnum[3]=0;
				reqnum[4]=0;
				break;
			}
			cr--;
			i=num[reqnum[cr-1]];
		}
		else
		i++;
	}
	for(int i=0;i<cr;i++)
	{
		cout<<reqnum[i]<<endl;
	}
	
}
