#include<iostream>
using namespace std;




int main()
{
	int t;
	cin>>t;
	int n;
	cin>>n;
	for(int qw=0;qw<t;qw++)
	{
		int a[n];
		int b[n];
		int sum1=0;
		int sum2=0;
		for(int er=0;er<n;er++)
		{
			cin>>a[er];
			sum1+=a[er];
		}
		for(int er=0;er<n;er++)
		{
			cin>>b[er];
			sum2+=a[er];
		}
		if (sum2<sum1||(sum2-sum1)%6!=0)
		{cout<<"NIE";
			}	
		else{
			
			int j=1;
			for(int i=0;i<n-2;i++)
			{
				int u1=a[i]+a[i+1]+a[i+2];
				int u2=b[i]+b[i+1]+b[i+2];
				if(u2<u1||((u2-u1)%6!=0));
				{continue;
				}
				else{
					
					while(a[i]!=b[i]||a[i+1]!=b[i+1]||a[i+2]!=b[i+2])
					{
						a[i]++;
						a[i+1]+=2;
						a[i+2]+=3;
						int l=a[i];
						a[i]=a[i+1];
						a[i+1]=a[i+2];
						a[i+2]=l;	
		
						if(a[i]>b[i]&&a[i+1]>b[i]&&a[i+2]>b[i])
						{j=0;cout<<"NIE";
						break;
						}
					}	
				}
			}
			
		}
		
	}
}
