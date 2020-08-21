#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	int c;
	if(a<b)
	{
		c=a;
		a=b;
		b=c;
	}
	if(a%b==0)
	{
		return b;
	}
	else{
		int r=a%b;
		return gcd(b,r);
		
	}
	
}
double fun1(int a, int b)
{
	int a1,a2,b1,b2;
	a1=a/10;
	a2=a%10;
	b1=b/10;
	b2=b%10;
	double f1,f2;
	f1=a;
	f1/=b;
	if(a1==b1)
	{
		f2=a2;
		f2/=b2*1.0;
	}
	else if(a1==b2)
	{
		f2=a2;
		f2/=b1;
	}
	else if(a2==b1)
	{
		f2=a1;
		f2/=b2*1.0;
	}
	else if(a2==b2)
	{
		f2=a1;
		f2/=b1*1.0;
	}
	else
	{
		f2=100;
	}
	if((a2)==0)
	{
		f2=100;
	}
	int rr=gcd(a,b);
	if(f1==f2)
	{
		if(rr>1)
		{
			cout<<a<<"\t"<<b<<endl;
		}
	}
	return f2;
}

int main()
{
	for(int i=99.0;i>10;i--)
	{
		for(int j=10.0;j<i;j++)
		{
			
			fun1(i,j);
		}
	}
	
}
