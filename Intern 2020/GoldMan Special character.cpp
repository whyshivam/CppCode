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
string ori,cpy;
bool eq(string a,string b){
	if(a.size()!=b.size())
	return false;
	for(int i=0;i<a.size();i++){
		if(a[i]!=b[i]){
			if(b[i]!='@'||b[i]!='$')
			return false;
		}
	}
	return true;
}
#define st substr
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cin>>ori>>cpy;
	int o=ori.size(),c=cpy.size();
	int l=0,r=cpy.size()-1;
	for(;l<cpy.size();l++)if(cpy[l]=='@')break;
	for(;r>=0;r--) if(cpy[r]=='@')break;
	

	if(l<r){
		string oril,cpyl,orir,cpyr;
		oril=ori.st(0,l);
		cpyl=cpy.st(0,l);
		orir=ori.st(o-(c-1-r),(c-1-r));
		cpyr=cpy.st(r+1,(c-1-r));
		if(eq(oril,cpyl)&&eq(orir,cpyr)){
			int i=l+1;
			for(;i<o-(c-1-r);i++){
				if()
			}
			
		}else{
			cout<<false;
		}
	}else{
		cout<<eq(ori,cpy);
	}
	
	

}

