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
struct data{
	ll val,key;

};
void solve(vector< vector<ll> > &a, ll i, ll j){
	cout<<"Inside function"<<i<<" "<<j<<"\n";
	ll k=max(a[i][j-1],a[i+1][j]);
	if(i==j+1||j==i+1)
	a[i][j]=k;
	else{
		ll k2=max((a[i][j-2]+a[j][j]),(a[i][j+2])+a[i][i]);
		a[i][j]=max(k,k2);
	}
	
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	ll n;
	cin>>n;
	
	vector<int> a(n);
	rep(n) 
	cin>>a[i];
	
	sort(a.begin(),a.end());
	
	vector<ll> all;
	ll k=0;
	
	for(ll i=0;i<n;i++){
		k=a[i];
		while(a[i]==a[i+1]){
			k+=a[i+1];
			
			if(i+1==n-1)
			{
				i++;
				break;
			}
			
			i++;
			
		}
		all.pb(k);
	
		if(a[i+1]!=a[i]+1&&i<n-1){
			all.pb(0);
			
			
		}
		
	}
	
	ll m=all.size();
	vector< vector<ll> > ans(m+1);
	rep(m+1) 
	ans[i]=vector<ll> (m+1);
	
	
	rep(m+1){
		ans[i][0]=0;
		ans[0][i]=0;
	}
	for(ll i=1;i<=m;i++)
	{
		ans[i][i]=all[i-1];
		
	}
	
	for(ll j=1;j<=m;j++){
		for(ll i=j-1;i>0;i--)
		{
			solve(ans,i,j);
			cout<<j<<" "<<i<<" "<<ans[j][i]<<"\n";
		
		}
	}
	cout<<ans[1][m-2];
	
	
	

}

