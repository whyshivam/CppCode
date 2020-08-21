#include<iostream>
using namespace std;
int p10(int m,int n)
{
	int s=1;
	int i=1;
	while(i<=n)
	{
		s*=m;
		i++;
	}
	return s;
}
bool prcube(long long int n)
{
	for(int i=n-1;i>=1;i--)
	{
		if(n%i==0)
		{
			if(n==i*i*i)
			{
				return true;
			}
			else
			{return false;
			break;
			}
		}
	}

}
int main()
{
	long long int t;
	int x=0;
	for(int i=0;;i++)
	{
		x=i;
		long long int y1=p10(x,6)+8*p10(x,4)-6*p10(x,2)+8;
		cout<<x<<"\t"<<y1<<"\n";
		if(prcube(y1))
		{
			cout<<x<<"\t"<<y1;
			break;
		}
	}
	
}
