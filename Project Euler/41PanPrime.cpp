#include<iostream>
using namespace std;
bool pal(int n)
{
	int num[10]={0,0,0,0,0,0,0,0,0,0};
	int h=n;
	num[0]=1;
	bool flag=true;
	int i=0;
	while(h>0)
	{
		i++;
		int r=h%10;
		h/=10;
		if(i>9)
		{
			flag=false;
			break;
		}
		if(num[r]==1)
		{
			flag=false;
			break;
		}
		num[r]++;
	}
	return flag;
}
bool pr(int n)
{
	bool flag=true;
	if(n<=1)
	{
		flag=false;
	}
	else
	{
		for(int i=2;i*i<n;i++)
		{
			if(n%i==0)
			{
				flag= false;
				break;
			}
		}
	}
	return flag;
}
int main()
{
	for(int i=987654321;;i-=2)
	{
		if(pal(i))
		{
			cout<<i<<endl;
			if(pr(i)==true)
			{
				cout<<i<<endl;
				
			}
		}
	}
}
