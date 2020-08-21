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

#define mk		 make_pair
#define ex		 "\n"
int main(){
ios_base::sync_with_stdio(0), cin.tie(0);
	cint{
		ll n,m;
		cin>>n>>m;
		vector<vector<ll> > num(n);
		rep(n){
			num[i]=vector<ll>(m);
		}
		vector<ll> pb(max(n,m));
		rep(pb.size())
		pb[i]=0;
		rep(n){
			for(ll j=0;j<m;j++){
				cin>>num[i][j];
				if(num[i][j]==1){
					pb[i]=1;
					pb[j]=1;
				}
			}
		}
		
		ll c=0;
		rep((min(n,m))){
			if(pb[i]==0)
			c++;
		}
		if(c%2==1){
			cout<<"Ashish\n";
		}
		else
		cout<<"Vivek\n";
		
	}

}

