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
		ll n,x,m;
		cin>>n>>x>>m;
		ll ans=1;
		ll mn=x,mx=x;
		rep(m){
			ll l,r;
			cin>>l>>r;
			if((l<=mn&&r>=mx)||(l>=mn&&l<=mx)||(r>=mn&&r<=mx)){
				mn=min(mn,l);
				mx=max(mx,r);
			}
			
		}
		ans=mx-mn+1;
		cout<<ans<<"\n";
	
	
	}

}

