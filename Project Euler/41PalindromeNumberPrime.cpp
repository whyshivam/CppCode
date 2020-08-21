#include<iostream>
#include<bits/stdc++.h> 

using namespace std;
int posi(int n)
{
	if(n<=0)
	{
		return (-n+11);
	}
	else
	return n;
}
int tosi(int n)
{
	if(n>=11)
	{
		n-=11;
		return -n;
	}
	else
	return n;
}
int sizenum(long long int n)
{
	long long int h=n;
	int i=0;
	while(h>0)
	{
		i++;
		h/=10;
	}
	return i;
}
long long int nxtpal(long long int n)
{
	int m=sizenum(n);
	long long int h=n;
	int num[m];
	for(int i=0;i<m;i++)
	{
		num[i]=h%10;
		h/=10;
	}
	int i=0;
	while(num[i+1]>num[i])
	{
		i++;
		if(i==m-1)
		{
			break;
		}
	}
	i++;
	int ch[i];
	for(int j=0;j<i;j++)
	{
	//	jh[j]=num[j];
		ch[j]=posi((num[j]-num[i]));
	}
	int si=(sizeof(ch)/sizeof(ch[0]));
	sort(ch,ch+si);
	//sort(jh,jh+si);
	
	int fnum=num[i]+ch[0];
	for(int j=1;j<i;j++)
	{
		ch[j]=tosi(ch[j])+num[i];
	}
	ch[0]=num[i];
	num[i]=fnum;
	sort(ch,ch+si);
	for(int j=0;j<i;j++)
	{
		num[j]=ch[i-j-1];
	}
	long long int ret=0;
	for(int i=(m-1);i>=0;i--)
	{
		ret=ret*10+num[i];
	}
	return ret;
}
bool pr(long long int n)
{
	bool prime=true;
	for(int i=2;i*i<n;i++)
	{
		if(n%i==0)
		{
			prime=false;
			break;
		}
	}
	return prime;
}
int main()
{
		//	cout<<nxtpal(1095347862)<<endl;
	for(long long int i=1234567;i<7654321;i=nxtpal(i))
	{
		if(pr(i)==true)
		{
			cout<<i<<endl;
		}
	}
}
