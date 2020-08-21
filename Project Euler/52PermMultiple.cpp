#include<iostream>
using namespace std;
bool chkpal(long long int n, long long int m)
{
	long long int h1=n,h2=m;
	int num1[10]={0,0,0,0,0,0,0,0,0,0};
	int num2[10]={0,0,0,0,0,0,0,0,0,0};
	int size1=0,size2=0;
	bool fl=true;
	if(h2>h1)
	{
		long long int k=h1;
		h1=h2;
		h2=k;
	}
	while(h1>0)
	{
		int k=h1%10;
		num1[k]++;
		h1/=10;
		k=h2%10;
		num2[k]++;
		h2/=10;	
	}
	for(int i=0;i<10;i++)
	{
		if(num1[i]!=num2[i])
		{
			fl=false;
			break;
		}
	}
	
	return fl;
	
}
int main()
{
	long long int i=1;
	long long int k=i;
	bool fl=false;
	int l=0;
	cout<<chkpal(2046,6420)<<chkpal(16,561)<<endl;
	while(l==0)
	{
		k=i;
		long long int k2;
		for(int j=2;j<=6;j++)
		{
			k2=k*j;
			if(chkpal(k,k2)==false)
			{
				fl=false;
				break;
			}
			if(j==6)
			{
				cout<<i<<endl;
				l=1;
				break;
			}
			
		}
		i++;
	}
		
	
	return fl;
}
