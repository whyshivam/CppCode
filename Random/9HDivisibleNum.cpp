#include<iostream>
using namespace std;
bool pr(int n)
{
		bool jack =1;
	for(int i=2;i*i<n;i++)
	{
		if(n%i==0)
		{
			jack =0;
			break;
		}
		
	}
	return jack;
}

int main()
{
	
	for(int i=1000000;;i++)
	{
		int count=1;
		int l=i;
		int q=count;
		for(int j=1;j<=i;j++)
		{
			int c=0;
		/*	if(pr(j)==0)
			{
				continue;
			}*/
			if(j==1)
			{
				
			}
			else if(l%j==0)
			{
				while(l%j==0)
				{
					c++;
					l/=j;
				}
			}
			count*=(c+1);
			if(l==1)
			break;
		}
		//cout<<i<<"\t"<<count<<endl;
	if(i%10000==0)
		{
			cout<<i<<"\t"<<count<<endl;
		}
		if(count>=300)
		{
		
			cout<<i<<"\t"<<count<<endl;
			break;
		}
		count=1;
		
	 } 
}
