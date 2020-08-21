#include<iostream>
using namespace std;
int hcf(int a,int b)
{
	if(a<b)
	{
		int h=b;
		b=a;
		a=h;
	}
	if(a%b==0)
	{
		return b;
	}
	else
	{
		a=a%b;
		return hcf(a,b);
	}
}
long long int cpr(int n, int m)
{
	int num[n+1];
	if(n-m<m)
	{
		m=n-m;
	}
	
	for(int i=0;i<=m;i++)
	{
		num[i]=i;
	}
	for(int i=m+1;i<=n-m;i++)
	{
		num[i]=1;
	}
	for(int i=n-m+1;i<=n;i++)
	{
		num[i]=i;
	}
	
	for(int i=2;i<=m;i++)
	{
		for(int j=n-m+1;j<=n;j++)
		{
			int fac=hcf(num[j],num[i]);
			if(fac!=1)
			{
				num[j]/=fac;
				num[i]/=fac;	
			}
			if(num[i]==1)
			{
				break;
			}
		}
	}
	long long int hj=1;
	for(int i=n-m+1;i<=n;i++)
	{
		hj*=num[i];
	}
	for(int i=2;i<=m;i++)
	{
		hj/=num[i];
	}

	return hj;
}

int main()
{
	long long int fb=1;
	int count=0;
	for(int i=1;i<=100;i++)
	{
		fb=1;
		for(int j=0;j*2<i+1;j++)
		{
			fb=cpr(i,j);
			//cout<<fb<<"\t";
			if(fb>1000000)
			{
				count+=i+1-j-j;
			//	cout<<i<<"\t"<<j<<"\t"<<fb<<"\t"<<count<<endl;
				break;
			}
			
			
			
		}
		
	}
	cout<<count<<endl;
}
