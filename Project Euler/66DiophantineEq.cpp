#include<bits/stdc++.h>
using namespace std;
bool prf(long long int n)
{
	long long int h=pow(n,0.5);
	if(h*h==n)
	{
		return true;
	}
	else 
	return false;
	
}
bool fc(long long int n,long long int m)
{
	bool fl=true;
	if(n%m==0)
	fl= true;
	else
	fl= false;
	if(n==0)
	{
		fl=false;
	}
	return fl;
}
int main()
{
	long long int x=0;
	long long int x2=0;
	for(int d=2;d<1000;d++)
	{
		if(prf(d)==true)
		continue;
		if(prf(d+1)==true)
		x=pow((d+1),0.5);
		else
		{
			x=pow((d+1),0.5);
			x++;
		}
		while (0==0)
		{
			
			long long int y=x*x-1;
			if(fc(y,d)==true)
			{
				y=y/d;
				if(prf(y)==true)
				{
					if(x>x2)
					{
						x2=x;
					}
					cout<<d<<"\t"<<x<<"\t"<<x2<<endl;
					break;
				}
			//cout<<"\t[fail]\t"<<d<<"\t"<<x<<"\t"<<y<<endl;
			}
		
			x++;
		}
	
	}
	
}
