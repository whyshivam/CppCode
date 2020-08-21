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
ll dia(vector< vector<ll> > &a, ll i1){
	ll n=a.size(),m=a[0].size();
	ll ans=0;
	if(m>n){
		ll i=0,j=i1;//dec 
		while(i<n && j>=0){//con
			if(a[i][j]==1){//scon
				ans++;
			}
			i++;
			j--;
			//move d
		}
		i=n-1;
		j=m-i1-1;
		while(i>=0&&j<m){
			if(a[i][j]==1){
				ans++;
			}
			i--;
			j++;
			//move u
		}
	}
	else if(n>=m){
		ll j=0,i=i1;
		while((i>=0 && j<m)){
			if(a[i][j]==1){
				ans++;
			}
			i--;
			j++;
			//mov u
		}
		i=n-i1-1;
		j=m-1;
		while((i<n && j>=0)){
			if(a[i][j]==1){
				ans++;
			}
			i++;
			j--;
			//mov d
		}
	}
	ll l=min((i1+1),m);
	l=min(l,n);
	if(ans>l)
	ans=2*l-ans;
	
	return ans;
}
int main(){
ios_base::sync_with_stdio(0), cin.tie(0);
	cint{
		ll n,m;
		cin>>n>>m;
		vector<vector<ll> > pal(n);
		rep(n)
		pal[i]=vector<ll> (m);
		
		rep(n){
			for(ll j=0;j<m;j++){
				ll c;
				cin>>c;
				pal[i][j]=c;
			}
		}
		
		ll ans=0;
		ll k=(n+m-1)/2;
		
		rep(k){
			ans+=dia(pal,i);
		}
		cout<<ans<<"\n";
	}

}

