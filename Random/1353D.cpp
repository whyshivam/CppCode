//Cut my wings and ask me to fly,
//to your astonishment I'll be lost in the sky
#include<bits/stdc++.h>
using namespace std;
#include<queue>
#define ull		 unsigned long long int
#define ll		 long long int
#define fast() 	 ios_base::sync_with_stdio(false); cin.tie(NULL);
#define rep(n)	 for(ll i=0;i<n;i++)
#define repj(n)  for(ll j=;j<n;j++)
#define MAX		 INT_MAX
#define MOD		 1000000007
#define f		 first
#define s		 second
#define pb		 push_back
#define mk		 make_pair
#define ex		 "\n"
int  fun(vector<int> &a,queue <int> &b)
{
	int l=b.front();
	b.pop();
	int r=b.front();
	int p=-1;
	if(l<=r)
	{
			if((r-l+1)%2){
			a[(l+r)/2]=a[0]+1;
		 	p=(l+r)/2;
		 	a[0]++;
		}
		else
		{
			a[((l+r-1)/2)]=a[0]+1;		
			p=((l+r-1)/2);
			a[0]++;
		}
	}
	return p;
	
	
}
int main(){
	long long int t;
	cin>>t;
	while(t){
		long long int n;
		cin>>n;
		vector<int> a(n+1,0);
		int l=1,r=5;
		queue <int> j;
		j.push(l);
		j.push(r);
		while(!j.empty())
		{
			int k=fun(a,j);
			if(k>=0)
			{
				j.push(k2);
				j.push(k-1)
				j.push(k+1);
				j.push(k3);
			}
		}
		for(long long int i=1;i<=n;i++)
		cout<<a[i]<<" ";
		cout<<"\n";
		
		
		
		
		
		t--;
	}
}

