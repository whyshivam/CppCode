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
ll bar(ll n,ll m){
	if(n<m)
	swap(n,m);
	return (n-m);
}
bool inrange(ll a, ll b, ll c){
	if(a>c)
	swap(a,c);
	if(b>=a&&b<=c)
	return false;
	return true;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cint{
		ll n;
		cin>>n;
		vector<ll> p(n);
		rep(n)
		cin>>p[i];
		
		vector <ll> num;
		num.pb(p[0]);
		num.pb(p[1]);
		ll k1=p[0], k2=p[1];
		rep(n-2){
			if(inrange(k1,k2,p[i+2])){
				num.pb(p[i+2]);
				k2=p[i+2];
				k1=num[num.size()-2];
			}
			else {
				num.pop_back();
				num.push_back(p[i+2]);
				k1=num[num.size()-2];
				k2=p[i+2];
			}

		}
		cout<<(num.size())<<"\n";
		rep(num.size())
		cout<<num[i]<<" ";
		
		cout<<"\n";
		
	
	
	
	
	}

}

