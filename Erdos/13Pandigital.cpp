#include<iostream>
using namespace std;
int Digi(long long int n)
{
	int c=0;
	while(n>0)
	{
		n/=10;
		c++;
	}
	return c;
}
int numDigi(long long int n,int i)
{
	int l=i;
	while(l)
	{
		n/=10;
		l--;
	}
	return (n%10);	
}
bool pandigital(long long int n)
{
	bool num[10];
	for(int i=0;i<10;i++)
	{
		num[i]=0;
	}
	for(int i=0;i<Digi(n);i++)
	{
		num[numDigi(n,i)]=1;
	}
	bool flag=1;
	for(int i=0;i<10;i++)
	{
		if(!num[i])
		{
			flag=0;
			break;
		}
		
	}
	return flag;
	
}
bool pr(long long int n)
{
	bool f=1;
	for(long long int i=2;i*i<n;i++)
	{
		if(n%i==0)
		{
			f=0;
			break;
		}
	}
	return f;
	
}
int main()
{
	long long int p=10234567891;
	for(long long int i=p;;i+=2)
	{
		if(pandigital(i))
		{
			cout<<i<<endl;
			if(pr(i))
			{
				cout<<endl<<i;
				break;
			}
		}
		
	}
}
