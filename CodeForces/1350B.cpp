//Cut my wings and ask me to fly,
//to your astonishment I'll be lost in the sky
#include<bits/stdc++.h>
using namespace std;
using std::max;

int main(){
	int t;
	cin>>t;
	for(int kl=0;kl<t;kl++)
	{
		long long int n;
		//cout<<"Enter N";
		cin>>n;
		
		
		long long int num[n];
		for(long long int i=0;i<n;i++)
		{
			//cout<<"ENter "<<i<<"\t";
			cin>>num[i];	
		}
		
		vector<int> ans(n,1);
		int mx=1;
		for(long long int i=1;i<=n;i++)
		{
			for(long long int j=2*i;j<=n;j+=i)
			{
				//cout<<"HH";
				if(num[j-1]>num[i-1])
				{
					ans[j-1]=max(ans[j-1],ans[i-1]+1);
					mx=max(ans[j-1],mx);	
				}
			}
		}
		
		
		cout<<mx<<"\n";
	}
	return 0;
}


