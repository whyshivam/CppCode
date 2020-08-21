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
//vector<int> dp;
vector<vector<int> > dp;
int uni(int n,unordered_set<int> mp ){
	if(n==dp.size())
	return 1;
	if(dp[n].size()==1){
		if(mp.find(dp[n][0])!=mp.end())
		return 0;
		else {
			mp.insert(dp[n][0]);
			return (uni(n+1,mp));
		}
	}
	int ans=0;
	for(int i=1;i<dp[n].size();i++){
		if(mp.find(dp[n][i])!=mp.end())
		ans+= 0;
		else {
			mp.insert(dp[n][i]);
			ans+= (uni(n+1,mp));
			mp.erase(dp[n][i]);
		}
	}
	return ans;
}

int alluni(vector<vector<int> > b){
	dp=b;
	unordered_set <int> k;
	return 	uni(0,k);
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n=3;
	vector<vector<int> > a;
	a[0].pb(5);
	a[0].pb(100);
	a[0].pb(2);
	a[1].pb(2);
	a[2].pb(5);
	a[2].pb(100);
	cout<<alluni(a);
}

