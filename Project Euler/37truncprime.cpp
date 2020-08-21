#include<iostream>
#include<cmath>
using namespace std;
bool pr(int n)
{
	bool flag=true;
	if(n==1)
	flag=false;
	else if(n==0)
	{
		flag=false;
	}
	else
	{
			for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				flag=false;
				break;
			}
		}
	}
	return flag;
}
int cat(int a,int b)
{
	a*=10;
	a+=b;
	return a;
}
int len(int n)
{
	int h=n;
	int v=0;
	while(h>0)
	{
		h/=10;
		v++;
	}
	return v;
}
bool rpr(int n)
{
	int h=0;
	bool flag=true;
	int l=len(h);
	for(int i=1;i<=l;i++)
	{
		int r2=(pow(10,i));
		int r=h%r2;
		if(pr(r)==false)
		{
			flag= false;
			break;
		}
	}
	
	return flag;
}
int main()
{
	int odd[5]={1,3,5,7,9};
	int a=0,b=0,a1;
	a1=a;
	int digi=0;
	int c=0;
	death:
	for(int i=c;i<=5;i++)
	{
		digi++;
		a=cat(b,odd[i]);
		if(rpr(a)==true)
		{
			b=a;
			cout<<b<<endl;
			
			goto death;
		
		}
		if(i==4)
		{
			afterlife:
			digi--;
			b/=10;
			int re=b%10;
			c=re/2+1;
			goto death;
		}
		else if(i==5)
		{
			goto afterlife;
		}
		
	}
	
}

