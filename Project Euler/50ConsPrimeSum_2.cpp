#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int prsum(int pr[],int a, int b)
{
	long long int sum=0;
	for(int i=a;a<b;i++)
	{
		sum+=pr[i];
	}
	return sum;
}
bool prime(long long int n)
{
	bool flag=true;
	
	for(int i=3;i*i<n;i++)
	{
		if(n<=2)
		{
			flag=false;
			break;
		}
		if(n%2==0)
		{
			flag=false;
			break;
		}
		if(n%i==0)
		{
			flag=false;
			break;
		}
	}
	return flag;
}
int main()
{
	bool num[1000001];
	memset(num,true,sizeof(num));
	num[0]=false;
	num[1]=false;
	int c=78498;
	int pr[c];
	long long int sumpr[c];
	long long int sum=0;
	c=0;
	memset(sumpr,0,sizeof(sumpr));
	int a=0,b,c2;
	for(int i=2;i<1000001;i++)
	{
		if(num[i]==true)
		{
			pr[c]=i;
			sum+=i;
			if(sum<=10000000)
			{
				sumpr[c]=sum;
				//cout<<c<<"\t--"<<pr[c]<<"\t"<<sumpr[c]<<endl;
				c2=c;
				if(sum<1000000)
				{
					if(prime(sum)==true)
					{
						b=c;
					}
				}	
			}
			c++;
			for(int j=2*i;j<1000001;j+=i)
			{
				num[j]=false;
			}
		}
	}
	ag:
	for(int i=b+1;i+b+1<=c2;i++)
	{
		for(int j=0;j<i-b;j++)
		{
			if(sumpr[i]-sumpr[j]>1000000)
			{
				break;
			}
			if(prime((sumpr[i]-sumpr[j]))==true)
			{
				b=i;
				a=j;
				goto ag;
			}
			
		}
	}
	cout<<a<<"\t"<<b<<"\t"<<(sumpr[b]-sumpr[a]);
	
}


