#include<iostream>
using namespace std;
#include<iostream>
using namespace std ;
#include<cmath>
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
int cat(int a,int b)
{
	a*=10;
	a+=b;
	return a;
}

int main()
{
	int odd[5]={9,7,5,3,1};
	int a=0,b,a1=0;
	int r=0,i,l=1;
	addmore:
		
	for(i=0;i<=4;i++)
	{
		b=odd[i];
		a=cat(a1,b);
		addmore2:
		if(pr(a)==true)
		{
			a1=a;
			r=0;
			goto addmore;
		}
		cout<<a1<<endl;
	
	}
}
