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
		string p;
		cin>>p;
		vector<ll> a;
		ll c=0;
		rep(n){
			if(p[i]=='0')
			c++;
			else{
				a.push_back(c);
				c=0;
			}
		}
		if(c!=0)
		a.pb(c);
		c=0;
		rep(a.size()){
			ll t1=0;
			t1+=a[i];
			t1-=k;
			if(p[0]=='0'&&i==0)
			{
				c++;
				if(a.size()==1)
				t1+=k;
				t1--;
			}
			if(t1>k){
				t1/=(k+1);
				c+=t1;
			}
		}
		if(a.size()>1){
			ll t1=a[a.size()-1];
			if((t1<=2*k)&&t1>k)
			c++;
		}
		cout<<c<<"\n";
	
	
	
	
	}

}

