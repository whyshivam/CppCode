#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		int ans=0,l=0,r=0;
		int num[n+1];
		int k[n];
		int p[n];
		memset(num,0,sizeof(num));
		for(int i=0;i<n;i++)
		{
			cin>>k[i];
			p[i]=k[i];
			if(k[i]<n)
			num[k[i]]++;
			if(num[k[i]]==2)
			{
				r++;
			}
		}
		l=n-r;
		sort(p,p+r);
		sort(p+r+1,p+n);
		for(int i=1;i<=r;i++)
		{
			if(p[i-1]!=i)
			{
				if(i>1)
				{
					sort(p+i-1;p+n);
					r=p[i-2];
				}
				break;
			}
		}
		for(int i=r+1;i<n;i++)
		{
			if(p[i-1]!=i-r)
			{
				if(i>r+1)
				{
					
					r=-1;
				}
				break;
			}
		}
		ans=l+r;
		cout<<ans;
		cout<<ans<<endl;
		if(ans==1)
		{
			if(l>0)
			{
				
			}
		}
	}
}
