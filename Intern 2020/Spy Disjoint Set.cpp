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

#define rep(n) for(ll i=0;i<n;i++)
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
ll fac(ll n){
	ll f=1;
	while(n>1){
		f*=n;
		n--;
	}return f;
}
int par(vpi &val , ll i){
	if(val[i].first!=i){
		val[i].first=par(val,val[i].first);
	}
	return val[i].first;
}
void connect(vpi &val, ll i, ll j){
	int l=par(val,i),r=par(val,j);
	if(l!=r){
		if(val[l].second>val[r].second){
			val[r].first=l;
		}else if(val[l].second==val[r].second){
			val[r].first=l;
			val[l].second++;
		}else{
			val[l].first=r;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	ll n;
	ll m;
	cin>>n>>m;
	vector< vi >  k(n);
	rep(n){
		k[i].push_back(1);
	}
	rep(m){
		ll l,r;
		cin>>l>>r;
		k[l-1][0]++;
		k[r-1][0]++;
		if(l-1>r-1)
		k[r-1].pb(l-1);
		else
		k[l-1].pb(r-1);
	}
	ll s=1;
	rep(n){
		s*=k[i][0];
		FOR(j,1,k[i].size()){
			ll t=k[i][j];
			k[j][0]--;
		}
	}
	cout<<(s%1000000007);
	/*vpi val(n);
	rep(n){
		val[i].first=i;
		val[i].second=1;
	}
	rep(m){
		ll l,r;
		cin>>l>>r;
		connect(val,(l-1),(r-1));
	}
	vpi all;

	rep(n){
		ll p=par(val,i);
		bool fl=false;
		for(ll j=0;j<all.size();j++){
			if(all[j].first==p){
				all[j].second++;
				fl=true;
				break;
			}
		}
		if(!fl){
			all.pb(make_pair(p,1));
		}
	}
	ll sum=1;
	rep(all.size()){
		ll p=fac(all[i].second);
		sum*=p;
		cout<<all[i].first<<" "<<all[i].second<<" "<<p<<"\n";
	}
	
	sum*=(fac(all.size()));
	sum%=1000000007;
	cout<<sum<<"\n";*/
	
	
	
	

}

