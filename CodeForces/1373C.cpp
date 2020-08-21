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
ll func(string s){
	ll res=0;
	int j=0;
	while(true){
		ll curr=j;
		bool fl=true;
		rep(s.size()){
			res++;
			if(s[i]=='+')
			curr++;
			else 
			curr--;
			if(curr<0){
				fl=false;
				break;
			}
		}
		if(fl)
		break;
		
		j++;
	}
	return res;
}
string gen(){
	ll n=rand()%10+1;
	string s="";
	rep(n){
		ll k=rand();
		if(k%2)
		s+="+";
		else
		s+="-";
	}
	return s;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	/*while(true){
		string s=gen();
		ll qq=func(s);
		
		ll n=s.size();
		ll ans=0;
		ll mut=0;
		ll p=0;
		ll k=0;
		for(ll i=0;i<n;i++){
			if(s[i]=='-'){
				p--;
				mut=i+1;
			}else{
				p++;
			}
			
			if(p<0){
				ans+=(i+1);
				p++;
			}
			
			if(i==n-1){
				if(s[i]=='-')
				ans+=n;
				else if(p>=0){
					ans+=(n);
				}
			}
			
		}
		
		cout<<" Here-  ";
		
		//ans+=(mut*n);
		if(qq==ans){
			cout<"gg";
		}else{
			cout<<"\n"<<s<<" "<<ans<<" "<<qq;
			break;
		}
	}*/
	cint{
	string s;
	cin>>s;
	ll n=s.size();
		ll ans=0;
		ll mut=0;
		ll p=0;
		ll k=0;
		for(ll i=0;i<n;i++){
			if(s[i]=='-'){
				p--;
				mut=i+1;
			}else{
				p++;
			}
			
			if(p<0){
				ans+=(i+1);
				p++;
			}
			
			if(i==n-1){
				if(s[i]=='-')
				ans+=n;
				else if(p>=0){
					ans+=(n);
				}
			}
			
		}
	
	cout<<ans<<"\n";
	
	
	
	
	
	}
}

