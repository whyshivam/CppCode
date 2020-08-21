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
ll fn1(string a){
	ll n=0;
	rep(a.size()){
		if(a[i]=='1')
		n++;
	}
	return n;
}
ll solve(string a){
	
	vector<string> p;
	ll c=2;
	rep(a.size()-1){
		if(a[i+1]==a[i]){
			c++;
		}
	}
	return (c/2);
}
int main(){
	//ios_base::sync_with_stdio(0), cin.tie(0);
	ll n;
	cin>>n;
	string s,t;
	cin>>s>>t;
	if(fn1(s)!=fn1(t)){
		cout<<-1<<"\n";
	}else{
		string a="";
		rep(s.size()){
			if(s[i]!=t[i])
				a=a+s[i];
		}
		
		ll k=solve(a);
		cout<<k<<"\n";
	}
	
	
	
	

}

