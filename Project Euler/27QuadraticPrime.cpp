#include<iostream>
using namespace std;
int ntPrime(int);
bool Prime(int);
int cPrime(int,int);

int main()
{
	int a=0, b=0, s=0;
	for(int i=-1000;i<=1000;i++)
	{
		for(int j=2;j>i*i/4;j=ntPrime(j))
		{
			int l=cPrime(i,j);
			if (l>s)
			{
				s=l;
				a=i;
				b=j;
				cout<<a<<"\t"<<b<<"\t"<<(a*b)<<endl;
			}
		}
	}
}
bool Prime(int n)
{
	int i = 2; int l;
	for(i;((i*i)<n);i++)
	{
		l=n%i;
		if(n==2)
		{
			return 1;
			break;
		}
		if(n==1)
		{
			return 1;
			break;
		}
		if(n==0)
		{
			return 1;
			break;
		}
		if (l==0)
		{
			return 0;
			break;
		}
		else
			return 1;
		}
	
}
int ntPrime(int n)
{
	int i=n;

	for(;;)
	{
		i+=1;
		if(Prime(i)==1)
		{
			break;
		}
	}
	return (i);
}
int cPrime(int a, int b)
{
	int n=0;
	int k= n*n + a*n + b;
	while(Prime(k)==1)
	{
		n++;
	}
	return n;
}

