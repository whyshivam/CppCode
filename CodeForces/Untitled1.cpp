#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int k[4];
	long int d;
	cin>>k[0]>>k[1]>>k[2]>>k[3]>>d;
	bool num[d+1];
	long c=0;
	memset(num,true,sizeof(num));
	for(int i=0;i<4;i++)
	{
		if(k[i]==1)
		{
			c=d;
			break;
		}
		else
		{
			
			if(num[k[i]]==true)
			{
				
				for(long long int j=k[i];j<=d;j+=k[i])
				{
					if(num[j]==true)
					{	
						c++;
						num[j]=false;
					//	cout<<j<<" ";
					}
				}
				//cout<<endl;
			}
		}
	}
	cout<<c;
}
