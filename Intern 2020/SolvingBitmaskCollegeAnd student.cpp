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
int dp[1025][10];
int n=10,m=10;
int allmask;
vector<vector<int> > all;
vector<int> vac(m);
int solve(int mask,int i,int nofvac){
	if(mask==allmask)
	return 0;
	
	if(dp[mask][i]>=0)
	return dp[mask][i];
	
	int k=solve(mask,i+1,vac[i+1]);
	for(int j=0;j<all[i].size();j++){
		if(all[i][j]>0){
			if(mask&&1<<j){
				continue;
			}else{
				if(vac[i]<=0){
					return dp[mask][i]=k;
				}else{
					k=max(k,(1+solve(mask||1<<j,i,vac[i]-1)));
				}
			}
		}
	}
	return dp[mask][i]=k;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	all=vector<vector<int> > (n,vector<int> (m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>all[i][j];
		}
	}
	for(int i=0;i<m;i++) cin>>vac[i];
	memset(dp,-1,sizeof dp);
	allmask=1<<n;
	allmask-=1;
	int mask=0;
	cout<<solve(mask,0,vac[0]);
	
}

