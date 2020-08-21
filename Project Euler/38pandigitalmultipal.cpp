#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool all(long long int n)
{
	int h=n;
	bool flag=true;
	int num[10];
	memset(num,0,sizeof(num));
	while (h>0)
	{
		int r=h%10;
		h/=10;
		num[r]++;
		

	}
	for(int i=1;i<=9;i++)
	{
		if(num[i]!=1)
		{
			flag=false;
			break;
		}
	}
	return flag;
}
int main()
{
	
	long long int h;
	for(int i=123;i<999;i++)
	{
		int n=9000+i;
		h=n*100000+n*2;
		if(all(h))
		{
			cout<<h<<endl;
		}
		
		
	}		
}	
