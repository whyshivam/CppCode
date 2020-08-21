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
		ll n, x;
		cin>>n>>x;
		vector<ll> a(n);
		ll k=0;
		
		rep(n){
			cin>>a[i];
			if(a[i]%x!=0)
			k=1;
		}
		vector<ll> s(n);
		s[0]=a[0];
		rep(n-1){
			s[i+1]=s[i]+a[i+1];
			if(s[i+1]%x!=0)
			k=i+1+1;
		}
		
		for(ll i=n-1;i>=k;i--){
			for(ll j=0;j+i<n;j++){
				ll an=0,pr=s[j+i];
				if(j!=0)
				an=s[j-1];
				if((pr-an)%x!=0){
					k=i+1;
					i=0;
					break;
				}
			}
		}
		end:
		if(k==0)
		k--;
		cout<<k<<"\n";
	}
	
	
	
	

}

