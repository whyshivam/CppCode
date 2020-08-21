#include<iostream>
using namespace std;
int ckabndt(int n)
{
	int sum=1;

	bool p=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
			if(sum>n)
			{
				p=1;
				break;
			}
		}	
	}

	return sum;
}
int main()
{
	int c=1;
	int abn[6966];
	bool num[28124];
	for(int i=1;i<=28123;i++)
	{
		if(ckabndt(i)>i)
		{
			abn[c]=i;
			//if(i%1000==0)
		//	cout<<c<<"\t"<<abn[c]<<endl;
			c++;
		}
		num[i]=1;
	}
	for(int i=1;i<=6965;i++)
	{
		for(int j=i;j<=6965;j++)
		{
			int t=abn[i]+abn[j];
			if(t>28123)
			;
			else
			num[t]=0;
			//if(i%1000==0)
		//	cout<<i<<"\t"<<j<<endl;
		}
	}
	long long int sum=0;
	for(int i=1;i<=28124;i++)
	{
		if(num[i]==1)
		{
			sum+=i;
		//cout<<i<<"\t"<<sum<<endl;
		}
	}
	cout<<sum;
	
}
