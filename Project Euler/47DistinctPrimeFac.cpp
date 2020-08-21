#include<iostream>
using namespace std;
bool pr(long long int n)
{
	bool flag=true;
	for(int i=2;i*i<n;i++)
	{
		if(n%i==0)
		{
			flag=false;
			break;
		}
	}
	return flag;
}
long long int nxtpr(long long int n)
{
	long long int i=n+2;
	while(pr(i)==false)
	{
		if(i==4)
		{
			return 3;
			break;
		}
		i+=2;
	}
	return i;
}
long long int rdnum(long long int n, long long int m)
{
	if(n%m==0)
	{
		int i=0;
		while(n%m==0)
		{
			n/=m;
			i++;
		}
	}
	return n;
}
bool pfac(long long int n,int m)
{
	int count=0;
	for(int i=2;i<n;i=nxtpr(i))
	{
		if(n%i==0)
		{
			n=rdnum(n,i);
			if(n!=1)
			{
				count ++;
			}
			
		}
	}
	if(count==m)
	{
		return true;
	}
	else
	return false;
}
int main()
{
	int t=0;
	long long int i=2*3*5*7;
	while(t==0)
	{
		if(pfac(i,4)==true)
		{
			cout<<i<<"\tTrying"<<endl;
			if(pfac(i+3,4)==true)
			{
				cout<<i<<"\tTryingHard"<<endl;
				if(pfac(i+2,4)==true)
				{
					cout<<i<<"\tTryingVeryHard"<<endl;
					if(pfac(i+1,4==true))
					{
						t=1;
						break;
					}
				}
			}
		}
		i+=4;
	}
	cout<<i<<endl;
}
