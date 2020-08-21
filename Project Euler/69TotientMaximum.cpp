#include<bits/stdc++.h>
using namespace std;
bool pr(int n)
{
	bool fl=true;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			fl=false;
			break;
		}
	}
	return fl;
}
int hcf(int a,int b)
{
	if(a<b)
	{
		int h=a;
		a=b;
		b=h;
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
int main()
{
	
	long long int m=2;
	int jk=3;
	
	while(m<1000000)
	{
		if(pr(jk)==true)
		{
			m*=jk;
			cout<<m<<endl;
		}
		jk++;
		
	}
	m=m/(jk-1);
	cout<<m;
	
	/*
	int num[300];
	double nn[300];
	for(int i=0;i<300;i++)
	{
		num[i]=1;
	}
	for(int i=2;i<300;i++)
	{
		cout<<i<<"\t";
		for(int j=2;j<i;j++)
		{
			if(hcf(i,j)==1)
			{
				num[i]++;
				//cout<<j<<",";
			}
		}
		//cout<<"\t"<<num[i]<<"\t";
		nn[i]=(i*1.0)/num[i]*1.0;
		cout<<nn[i]<<endl;
		
	}
*/
	
}
