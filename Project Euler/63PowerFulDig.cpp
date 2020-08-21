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
ll dig(ull n){
	ll k=n;
	ll a=0;
	while(k){
		a++;
		k/=10;
	}
	return a;
}
ll solve (ll n){
	ll i=1;
	ull k=n;
	while(dig(k)==i){
		i++;
		k*=n;
	}
	return (i-1);
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	ll sum=0;
	rep(9){
		ll n=solve(i+1);
		sum+=n;
		cout<<(i+1)<<" "<<n<<endl;
	}
	// check specially for 9 2 missing(max is 21th power not 19th)
	cout<<sum;

}

