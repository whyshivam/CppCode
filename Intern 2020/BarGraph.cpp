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

#define rep(n)  for(ll i=0;i<n;i++)
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
void print(vi n){
	rep(n.size())
	cout<<n[i]<<" ";
	cout<<"\n";
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cint{
	ll n,k;
	cin>>n>>k;
	
	vi a(n);
	rep(n) cin>>a[i];
	
	vi b(n-1),c(n-1);
	b[0]=a[1]-a[0];
	c[0]=a[1]-a[0];
	rep(n-2){
		b[i+1]+=b[i]+(a[i+2]-a[i+1]);
		c[i+1]=(a[i+2]-a[i+1]);
	}

	ll l=k,r=0;
	for(ll i=1;i<=k;i++){
		if(b[k-1-i]+(b[n-2]-b[n-2-i])>b[l-1]+b[n-2]-b[n-2-r]){
			l=(k-i);
			r=i;
		}
	}
	
	ll ans=0;
	for(ll i=l;i<n-1-r;i++){
		if(c[i]>ans){
			ans=c[i];
		}
	}
	cout<<ans<<"\n";
	
	}

}

