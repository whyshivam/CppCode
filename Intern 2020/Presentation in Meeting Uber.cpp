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
	long long int t;
	cin>>t;
	long long int n,k;
	cin>>n>>k;
	vector<pair<int,int> > p(n);
	for(auto &i:p){
		cin>>i.first>>i.second;
	}
	
	cout<<"\n";
	vector<vector<int> > gaps;
	int curr=0,prev=0;
	for(auto i:p){
		vector<int> g(3,0);
		if(curr!=i.first){
			g[0]=curr;
			g[1]=i.first;
			curr=i.second;
			g[2]=prev;
			prev=1;
			gaps.pb(g);
		}else{
			curr=i.second;
			prev++;
		}
	}
	if(curr!=t){
			vector<int> g(3,0);
			g[0]=curr;
			g[1]=t;
			curr=t;
			g[2]=prev;
			gaps.pb(g);
	}
	long long int ans=0,mx=0;
	queue<int> joined;
	int l=k;
	int c=0;
	
	for(auto i:gaps){
		cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<"\n";
		if(l-i[2]>=0){
			joined.push(c);
			ans+=(i[1]-i[0]);
			l-=i[2];
		}else{
			while(l<0){
				auto temp=gaps[joined.front()];
				l+=(temp[2]);
				ans-=(temp[1]-temp[0]);
				joined.pop();	
			}
		}
		mx=max(ans,mx);
		c++;
	}
	cout<<mx<<"\n";
}

