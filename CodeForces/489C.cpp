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
void mn(ll l, ll s){
	ll k=(s/9);
	ll p=s%9;
	if(p==0){
		k--;
		p=9;
	}
	
	string ans="";
	rep(k) 
	ans+="9";
	
	if(l-k>=2)
	{
		cout<<"1";
		rep(l-k-2)
		cout<<"0";
		cout<<(p-1);
	}else{
		cout<<p;
	}	
	cout<<ans<<" ";
}
void mx(ll l, ll s){
	ll k=(s/9);
	ll p=s%9;
	if(p==0)
	{
		p=9;
		k--;
	}
	string ans="";
	rep(k)
	cout<<"9";
	cout<<p;
	
	rep((l-k-1))
	cout<<"0";
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	ll m, s;
	cin>>m>>s;
	if(s>m*9)
	cout<<"-1 -1\n";
	else if(s==0&&m!=1){
		cout<<"-1 -1\n";
	}else if(s==0&&m==1)
	cout<<"0 0\n";
	else{
		mn(m,s);
		mx(m,s);
		cout<<"\n";
	}
	
	
	

}

