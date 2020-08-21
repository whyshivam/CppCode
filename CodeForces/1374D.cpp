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

#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define cint ll t;for(cin>>t;t>0;t--)

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cint{
		ll n,k;
		cin>>n>>k;
		vector<ll> a(n);
		rep(n) cin>>a[i];
		
		vector<ll> b;
		rep(n) {
			ll temp=(a[i]%k);
			if(temp>0){
				temp=k-temp;
				b.push_back(temp);
			}
		}
		sort(b.begin(),b.end());
		ll sum=0;
		if(!b.empty()){
			sum=b[b.size()-1];
			ll count=0;
			pair<ll,ll> cmax=make_pair(0,0);
			
			rep(b.size()-1){
				if(b[i+1]==b[i]){
					count+=;
				}else{
					
				}
			}
					cout<<"match "<<cmax.first<<" "<<cmax.second<<" \n";
			
			if(cmax.first>=0){
				sum=(cmax.first)*(k)+1+cmax.second;
			}else{
				if(sum>0)
				sum++;
			}
		}
		cout<<sum<<"\n";
		
	
	
	
	}

}

