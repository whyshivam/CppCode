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

template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }


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

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin>>n;
	vector<int> a(n),v(n);
	long long int k=INT_MAX;
	int ki=0;
	int vsum=0;
	int asum=0;
	for(int i=0;i<n;i++){
		cin>>a[i]>>v[i];
		vsum+=v[i];
		asum+=a[i];
	}
	for(int i=0;i<n;i++){
		if(k>a[i]){
			k=a[i];
			ki=i;
		}
	}
	long long int ans=1;
	ans=((k)*(vsum-v[ki]));
	k=INT_MAX;
	for(int i=0;i<n;i++){
		if(k>v[i]){
			k=v[i];
			ki=i;
		}
	}
	ans=min(ans,(k*(asum-a[ki])));
	cout<<ans<<"\n";
}

