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
ll pos(ll n){
	if(n<0)
	n=-n;
	return n;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	ll n,p;
	cin>>n>>p;
	string nam;
	cin>>nam;
	ll k=(n+1)/2;
	vector<ll> a;
	ll sum=0;
	rep(k){
		if(nam[i]!=nam[n-i-1]){
			ll p=pos((int)(nam[i])-(int)(nam[n-i-1]));
			p=min(p,(26-p));
			sum+=p;
			a.pb(i);
		}
	}
	p=min(p,((n+1)-p))-1;
	if(a.empty())
	cout<<sum;
	else{
		if(a[0]<p&&a[a.size()-1]>p){
			ll k1=a[a.size()-1]-p;
			ll k2=p-a[0];
			sum+=(min(k1,k2)*2+max(k1,k2));
		}else if(a[0]==p||a[a.size()-1]==p){
			sum+=(a[a.size()-1]-a[0]);
		}else{
			if(p>a[a.size()-1])
			sum+=p-a[0];
			else
			sum+=a[a.size()-1]-p;
		}
		cout<<sum;
	}
	

}

