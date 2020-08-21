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
int dig(char t){
	int a=(int)t;
	a-=49;
	return a;
}
int solve(string p,int k){
	int l=p.length();
	int a=0,b=0;
	rep(l){
		if(dig(p[i])>a){
			a=((a+11)-dig(p[i]))%11;
		}
	}
	a%=11;
	b%=11;
	int ans=0;
	cout<<a<<" "<<b<<"\n";
	if(l&2){
		
		if(b<a)
		{
			ans=11-(a-b);
			
		}else{
			ans=(b-a);
		}
	}else 
	{
		ans=(a+11-b)%11;
		if(a>b)
		ans=a-b;
		else{
			ans=11-(b-a);
		}
	}
	if(ans==k%11)
	cout<<"TRUE";
	else{
		cout<<k<<" "<<p<<" "<<ans<<" "<<(k%11)<<"\n";
		return 0;
	}
return 1;
	
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	while(true){
		int k=rand();
		int n=k;
		string p="";
		while(n){
			p=(char)((n%10+48))+p;
			n/=10;
		}
	if(solve(p,k)==0)
	break;
	}
}

