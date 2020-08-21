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
bool fnbug(long long int n)
{
	bool br=true;
	for(int i=1;i<=4;i++)
	{
		int h=n%10;
		n/=10;
		if(h==0)
		{
			br=false;
			break;
		}
	}
	return br;
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
	long long int ret=0;
	while(num[i+1]>=num[i])
	{
		i++;
	
	}
	i++;
	if(i==m)
	{
		ret=0;
	
	}
	else if(fnbug(n)==false)
	{
		ret=0;
	}else
	{
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
		
		for(int i=(m-1);i>=0;i--)
		{
			ret=ret*10+num[i];
		}
			
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
long long int nxtpr(long long int n)
{
	long long int h=2+n;
	while(pr(h)==false)
	{
		h+=2;
	}
	return h;
}

int main()
{
	
	for(long long int i=nxtpr(1111);i<9999;i=nxtpr(i))
	{
		long long int il[3];
		il[0]=i;
		int l=0;
		long long int j=il[0];
	//	cout<<"\tPrime\t"<<i<<endl;
		while(nxtpal(j)!=0)
		{
		//	cout<<j<<"\tHardWork"<<endl;
			j=nxtpal(j);
			if(pr(j)==true)
			{
			//	cout<<j<<"\t Work"<<endl;
				l++;
				il[l]=j;
			}
			
			if(l==2)
			{
				if(il[1]==il[0]+3330)
				{
					if(il[2]==il[1]+3330)
					{
						cout<<il[0]<<il[1]<<il[2]<<endl;
						break;
					}
				}
				
			}
		}
	}
	
}

	

