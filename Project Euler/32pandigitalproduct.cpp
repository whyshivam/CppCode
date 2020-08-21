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
bool pal(int n1,int n2)
{
	int num[10]={0,0,0,0,0,0,0,0,0,0};
	num[0]=1;
	int h1=n1,h2=n2;
	bool flag=true;
	while(h1>0)
	{
		int r=h1%10;
		h1/=10;
		if(num[r]==1)
		{
			flag=false;
			goto jack;
		}
		num[r]++;
	}
	while(h2>0)
	{
		int r=h2%10;
		h2/=10;
		if(num[r]==1)
		{
			flag=false;
			goto jack;
		}
		num[r]++;
	}
	jack:
	return flag;
}
bool pal(int a,int b,int c)
{
	int num[10]={0,0,0,0,0,0,0,0,0,0};
	int h1=a,h2=b,h3=c;
	num[0]=1;
	bool flag=true;
	int i=0;
	while(h1>0)
	{
		i++;
		int r=h1%10;
		h1/=10;
		if(num[r]==1)
		{
			flag=false;
			goto jack;
		}
		num[r]++;
	}
	while(h3>0)
	{
		i++;
		int r=h3%10;
		h3/=10;
		if(num[r]==1)
		{
			flag=false;
			goto jack;
		}
		num[r]++;
	}
	while(h2>0)
	{
		i++;
		int r=h2%10;
		h2/=10;
		if(num[r]==1)
		{
			flag=false;
			goto jack;
		}
		num[r]++;
	}
	if(i<9)
	{
		flag=false;
	}
	
	
	jack:
	return flag;
	
}
int main()
{
	int sum=0;
	for(int i=1234;i<=98765;i++)
	{
		if(pal(i)==true)
		{
			for(int j=2;j<=98;j++)
			{
				if(pal(i,j)==true)
				{
					if(i%j==0)
					{	
						int h=i/j;
						if(pal(j,i,h)==true)
						{	
							sum+=i;
							cout<<i<<"\t"<<j<<"\t"<<h<<"\t"<<sum<<endl;
							i++;
						}
					}
				}
				
			}
		}
	}
		
}
