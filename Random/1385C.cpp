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
		ll n;
		cin>>n;
		vector<ll> a(n);
		rep(n) cin>>a[i];
		
		ll k=n-1;
		while(k>0){
			if(a[k]>a[k-1]){
				break;
			}
			k--;
		}
		ll i=k;
		while(i>0){
			i--;
			if(a[i]<a[i-1]){
				break;
			}
			
		}
		cout<<i<<"\n";
	
	
	
	}

}

