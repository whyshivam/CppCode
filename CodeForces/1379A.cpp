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

void solve (string k){
	string f="abacaba";
	ll v=0;
	for(ll j=0;j<=k.size()-7;j++){
		v=0;
		string k2=k.substr(j,7);
		rep(7){
			if(k2[i]==f[i]){
				v++;
			}else if(k2[i]=='?'){
				v++;
				k[j+i]=f[i];
			}else{
				v=0;
				break;
			}
		}
		if(v==7){
			break;
		}
	}
	
	if(v==7){
		size_t fnd=k.find(f);
			
			if(fnd!=k.string::npos){
				string k2=k.substr(fnd+1,k.size()-fnd-1);
				size_t fnd2=k2.find(f);
				if(fnd2!=k2.string::npos){
					cout<<"NO\n";
				}else{
					cout<<"YES\n";
					rep(k.size()){
						if(k[i]=='?'){
							cout<<'e';
						}else{
							cout<<k[i];
						}
					}
					cout<<"\n";
				}
			}else{
				cout<<"NO\n";
			}
	}else{
		cout<<"NO\n";
	}
	
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cint {
		ll n;
		string k;
		cin>>n>>k;
		string f="abacaba";
		size_t fnd=k.find(f);
		
		if(fnd!=k.string::npos){
			string k2=k.substr(fnd+1,k.size()-fnd-1);
			size_t fnd2=k2.find(f);
			if(fnd2!=k2.string::npos){
				cout<<"NO\n";
			}else{
				cout<<"YES\n";
				rep(n){
					if(k[i]=='?'){
						cout<<'e';
					}else{
						cout<<k[i];
					}
				}
				cout<<"\n";
			}
		}else{
			solve(k);
		}
	}
	
	

}

