//Cut my wings and ask me to fly,
//to your astonishment I'll be lost in the sky
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

#define rep(a) for(ll i=0;i<a;i++)
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define cint ll t;for(cin>>t;t>0;t--)

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	int e;
	vi ear(n);
	vi cos(n);
	cin>>n>>e;
	rep(n) cin>>ear[i];
	rep(n) cin>>cos[i];
	vi pro(n);
	ll s=0;
	
	ll mx=0,mxi=0;
	
	rep(n-1){
		if(ear[i]>cos[i]){
			s+=((ear[i]-cos[i]));
		}
		if(ear[i]>mx){
			mx=ear[i];
			mxi=i;			
		}
		pro[i]=s;
	}
	s+=ear[n-1];
	pro[n-1]=s;
	ll profit=0;
	rep(n-1){
		if(profit+ear[i]>pro[n-1]&&i>=mxi){
			profit+=ear[i];
			break;
		}else{
			profit=pro[i];
		}
	}
	if(profit<pro[n-1]){
		profit=pro[n-1];
	}
	
	cout<<(profit*e);
	
	
	
	
	
	

}

