#include<iostream>

#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int t=1000;
	bool num[t+1];
	memset(num,true,sizeof(num));
	for(int i=2;i*i<t+1;i++)
	{
		if(num[i]==true)
		{
			for(int j=i*i;j<t+1;j+=i)
			{
				num[j]=false;
			}
		}
	}
	int pcount=0;
	for(int p=2;p<=t+1;p++)
	{
		if(num[p]==true)	
		{
			pcount++;
		}
	}
	int pr[pcount];
	pcount=0;
	for(int p=2;p<=t+1;p++)
	{
		if(num[p]==true)
		{
			pr[pcount]=p;
			pcount++;
		}
	}
	int j=0;
	cout<<pcount<<endl;
	long long int sum=0;
	int kmax[3];
	kmax[0]=0;
	int l1=1,l2=0,process=0;
	for(int i=0;i<pcount;i++)
	{
		sum+=pr[i];
		if(sum>t)
		{
				while(sum>t)
				{
					if(process%2==0)
					{
						sum-=pr[j];
						j++;
					}
					else
					{
						sum+
					}

				}
		}
		if(num[sum]==true)
		{
			l2=i-j+1;
			cout<<l2<<"\t"<<sum<<"\t"<<i+1<<"\t"<<j<<endl;
			
			
			if(l2<=l1)
			{
				process++;
				goto rip;
			}
				kmax[0]=i-j+1;
				kmax[1]=i+1;
				kmax[2]=j;
			l1=l2;
		}
	}
}
