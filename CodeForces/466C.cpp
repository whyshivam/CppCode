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
ll md(vector<ll> a){
	ll t=1;
	rep(a.size()){
		if(a[i]>0)
		t*=a[i];
	}
	return t;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	ll n;
	cin>>n;
	vector<ll> a(n);
	rep(n) 
	cin>>a[i];
	
	ll sum= 0;
	rep(n) 
	sum+=a[i];
	

	ll c=0;
	if(sum%3!=0)
		cout<<c<<endl;
	else if(sum!=0){
	
		vector<ll> k(4,1);
		ll s=0;
		ll j=0;
		rep(n){
			s+=a[i];	
			if(s==0&&i!=0&&i!=n-1)
			k[j]++;
			if(s==sum/3){
				s=0;
				j++;
			}
		}
		if(j<2)
		cout<<0;
		else
		{
			cout<<(k[1]*k[2]);
		}
		
	}else if(sum==0){
		
		ll k=0;
		ll s=0;
		ll j=0;
		rep(n){
			
			s+=a[i];	
			if(s==0){
			k++;
			}
		}
		k-=1;
		if(k<=0)
		cout<<0;
		else if(k==1)
		cout<<1;
		else
		cout<<((k*(k-1))/2);
		
	}
	
	
}

