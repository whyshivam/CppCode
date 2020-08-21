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
	cint{
		ll n,k;
		cin>>n>>k;
		vector<ll> a(n);
		rep(n)
		cin>>a[i];
		vector<ll> b(k);
		rep(k)
		cin>>b[i];
		
		ll c=0;
		sort(b.begin(),b.end());
		sort(a.begin(),a.end());
		
		ll i=0;
		ll j=0;
		
		while(!b.empty()&&b[0]==1){
			c+=(2*a[n-1]);
			a.erase(a.begin()+n-1);
			n--;
			b.erase(b.begin());
			k--;
		}
		i=0;
		while(i<b.size()){
			c+=(a[j]);
			a.erase(a.begin()+j);
			n--;
			j+=b[i];
			i++;
		}
		i=0;
		while(i<b.size()){
			c+=(a[n-1]);
			a.erase(a.begin()+n-1);
			i++;
		}
		cout<<c<<"\n";
	
	
	
	}

}

