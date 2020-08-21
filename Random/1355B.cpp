//Cut my wings and ask me to fly,
//to your astonishment I'll be lost in the sky
#include<bits/stdc++.h>
using namespace std;
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
int main(){
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	ll t;
	cin>>t;
	while(t){
		ll n;
		cin>>n;
		long long int e[n];
		rep(n)
		cin>>e[i];
		sort(e,e+n);
		long long int j=0;
		long long int k=0;
		for(long long int i=0;i<n;i++)
		{
			if(e[i]<=i-j+1)
			{
				k++;
				j=i+1;
			}
		}
		cout<<k<<"\n";
		
		
		t--;
	}
	
}

