#include<iostream>
#include<cmath>
using namespace std;
int lt(int b, int n, int k)
{
	int l=1;
	for(int i=0;i<n;i++)
	{
		l*=b;
		if(l>pow(10,k))
		{
			l=l%100;
		}
	}
	return l;
	
}
int main()
{
	int c=1;
	cout<<c<<"\t1"<<endl;
	for(int i=2;i<100;i++)
	{
		int a,b;
		a=i;
		b=a%10;
		a/=10;
		int k=lt(b,i,2)+10*((((i*a)%10)*lt(b,i-1,1))%10);
		k=k%100;
		if(k==i)
		{
			c++;
			cout<<c<<"\t"<<k<<endl;
		}
	}
	
}
