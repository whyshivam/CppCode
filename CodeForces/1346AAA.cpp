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
	ll n,x;
	cin>>n>>x;
	vector<ll> a(n);
	rep(n){
		cin>>a[i];
	}
	
	ll l=-1,r=-1,sum=0;
	rep(n)
	if(a[i]%x!=0){
		l=i;
		break;
	}
	
	if(l>-1)
	for(ll i=n-1;i>=l;i--)
	if(a[i]%x!=0){
		r=i;
		break;
	}
	
	rep(n)
	sum+=a[i];
	
	if(sum%x!=0)
	cout<<n<<"\n";
	else{
		ll k=-1;
		if(l!=r){
			k=max((n-l-1),(r));
		}
		cout<<k<<"\n";
		
		
	}
	
	
	
	}
}

