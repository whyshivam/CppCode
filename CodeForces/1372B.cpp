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
void pr(ll n){
	bool fl= true;
	for(ll i=2;i<n;i++)
	{
		if(n%i==0){
			cout<<((n/i))<<" "<<(n- (n/i))<<"\n";
			fl=false;
			break;
		}
	}
	if (!fl){
		cout<<(n-1)<<" 1\n";
	}
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cint{
		ll n;
		cin>>n;
		bool fl=false;
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				ll k= (n/i);
				ll p=(n-k);
				cout<<k<<" "<<(n*(i-1)/i)<<"\n";
				fl=true;
				break;
			}
		}
		if(!fl)
		cout<<(n-1)<<" 1\n";
		
	
	
	}

}

