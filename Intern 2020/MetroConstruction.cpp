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
int root(vpi &a, ll i){
	ll j=i;
	while(a[j].f!=j&&j>=0){
		j=a[j].f;
	}
	
	return j;
}
void join(vpi & a, ll i, ll j){
	ll k1=root(a,i),k2=root(a,j);
	if(k1!=k2){
		if(a[k1].s>a[k2].s){
			a[j].f=i;
			a[k1].s+=a[k2].s;
		}else{
			a[i].f=j;
			a[k2].s+=a[k1].s;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	ll n,m;
	cin>>n>>m;
	vpi a(n);
	rep(n){
		a[i].f=i;
		a[i].s=1;
	}
	ll count=3;
	rep(m){
		ll k1,k2;
		cin>>k1>>k2;
		k1--;
		k2--;
		if(root(a,k2)==root(a,k1)){
			count--;
		}else{
			join(a,k1,k2);
		}
	}
	vi s;
	rep(n){
		ll k=root(a,i);
		
		if(k>=0){
			s.pb(a[k].s);
			a[k].f=-1;
			//cout<<k<<" <- "<<i<<" -> "<<a[k].s<<"\n";
		}
	}
	sort(s.begin(),s.end());
	//cout<<count<<"\n";
	int i=0;
	while(count>0){
		if(s[i]>=count){
			s[i]=1;
			count=0;
		}else{
			count-=s[i];
			s[i]=1;
		}	
	}
	ll sum=0;
	for(ll j=0;j<s.size();j++){
		sum+=(s[j]*(s[j]-1));
	}
	cout<<sum<<"\n";

}

