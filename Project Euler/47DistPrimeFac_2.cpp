#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int hcf(long long int a,long long int b)
{
	if(b>a)
	{
		long long int h=a;
		a=b;
		b=h;
	}
	if(a%b==0)
	{
		return b; 
	}
	else
	{
		a=a%b;
		return hcf(a,b);
	}
}
int main()
{
	//unsigned long long int n=1000000;
	int num[500000];
	//memset(num,0,sizeof(num));
	for(long long int i=0;i<500000;i++)
	{
		num[i]=0;
	}
	int pp[4][4];
	
	for(long long int i=2;i<500000;i++)
	{
		if(num[i]==0)
		{
			//cout<<i<<"\t"<<num[i]<<"\n";
			for(long long int j=2*i;j<500000;j+=i)
			{
				num[j]++;
			}
		}
	}
	/*for(int i=0;i<n;i++)
	{
		cout<<num[i]<<"\t"<<i<<endl;
	}*/
	for(long long int i=2*3*5*7;i<500000-3;i++)
	{
		if(num[i+3]==4)
		{
		//	cout<<"Work1\n";
			if(num[i+2]==4)
			{
			//	cout<<"worki\t"<<i<<endl;
				if((num[i]==4))
				{
				//	cout<<"wrkng\t"<<i<<"\n";
					if(num[i+1]==4)
					{
						//int t=hcf(i+3,i+1);
						//cout<<"Working\t"<<i<<"\n";
						long long int h4=(i+3),h3=(i+2),h2=(i+1),h1=i;
						long long int t=hcf(h4,h2);
						if(t==2)
						{
							h4/=t;
							h2/=t;
						}
						else
						{
							h3/=2;
							h1/=2;
						}
						if(hcf(h4,h2)==1)
						{
							if(hcf(h1,h3)==1)
							{
								cout<<i<<endl;
								//"\t"<<num[i]<<"\t"<<num[i+1]<<"\t"<<num[i+2]<<"\t"<<num[i+3]<<"\n"<<hcf(i+1,(i+3))<<"\t"<<hcf(i,i+2)<<endl;
								break;
								
							}
						}
					}
				}
			}
			
			
		}
		
	}
	
	
}
