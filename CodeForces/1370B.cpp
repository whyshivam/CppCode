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
#define cint	 ll t;for(cin>>t;t>0;t--)
#define f		 first
#define s		 second
#define pb		 push_back
#define mk		 make_pair
#define ex		 "\n"
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cint {
	ll n;
	cin>>n;
	vector<ll> o,e;
	rep(2*n){
		ll c;
		cin>>c;
		if(c%2==0)
		e.pb(i+1);
		else
		o.pb(i+1);
	}
	if(o.size()%2==0)
	{
		if(o.size()<2)
		{
			e.pop_back();
			e.pop_back();
		}
		else{
			o.pop_back();
			o.pop_back();
		}
	}
	else
	{
		o.pop_back();
		e.pop_back();
	}
	for(ll i=0;i<o.size();i+=2)
	{
		cout<<o[i]<<" "<<o[i+1]<<"\n";
	}
	for(ll i=0;i<e.size();i+=2)
	{
		cout<<e[i]<<" "<<e[i+1]<<"\n";
	}
	

	
	
	
	
	}

}

