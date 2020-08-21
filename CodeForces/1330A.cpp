#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int t;
	//cout<<endl<<"T - ";
	cin>>t;
	
	for(int j=0;j<t;j++)
	{
		int n,x;
		//cout<<endl<<" n - ";
		cin>>n>>x;
		//cout<<endl<<"  a - ";
		int p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
		}
		sort(p,p+n);
		int count=p[0]-1;
		int r=p[0]+x-count;
		if(x<count)
		r=x;
		for(int i=1;i<n;i++)
		{
			if(p[i]-p[i-1]-1>0)
			{
				
				if(count>=x)
				{
					r=p[i-1]-count+x;
					break;
				}
				count+=(p[i]-p[i-1]-1);
			}
			else	
			r=p[i]-count+x;
		}
		
		cout<<r<<endl;
	}
}
