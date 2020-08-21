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
	ll n , m;
	cin>>n>>m;
	if(m>(2*(n+1))||m<(n-1))
	cout<<"-1\n";
	else{
		string p="";
		int k=(m-n);
		if(k<0){
			//print one less
			rep(n-1){
				p+="01";
			}
			p+="0";
		}else{
			ll j=k;
			rep(n){
				if(j>0){
					p+="1";
					j--;
				}
					p+="10";
			}
			rep(j){
				p+="1";
			}
			if(n==0){
				rep(m)
				p+="1";
			}
		}
		cout<<p<<"\n";
	}

}

