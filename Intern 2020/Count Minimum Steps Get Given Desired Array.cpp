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
stack<pair<int,int> > compute(int a){
	stack<pair<int,int> > ans;
	while(a){
		pair <int,int> nw;
		if(a%2){
			nw.first=a%2;
			nw.second=1;
		}else{
			int k=0;
			while(a%2==0&&a>0){
				k++;
				a/=2;
			}
			nw.first=0;
			nw.second=k;
		}
		ans.push(nw);
	}
	return ans;
}
int min(vector< stack < pair <int,int> > > b){
	int mn=INT_MAX;
	for(auto i:b){
		mn=min(mn,i.top().second);
	}
	bool fl=true;
	for(auto &i:b){
		i.top().second-=mn;
		
		if(i.top().second!=0)
		fl=false;
	}
	
	if(fl){
		for(auto &i:b){
			i.pop();
		}
		mn+=min(b);
	}else{
		mn+=apolytic(b);
	}
	
	//function apolytic;
	return mn;
}
int apolytic(vector< stack < pair <int,int> > > b){
	int add=0;
	for(auto i:b){
		add+=decompute(i);
	}
	return add;
}
int decompute(stack<pair<int,int> > a){
	int k=0;
	while(!a.empty()){
		if(a.top().first){
			k++;
			a.pop();
		}else{
			k<<a.top.second;
			a.pop();
		}
	}
	return k;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin>>n;
	vector<int> a(n);
	for(auto &i:a)
	cin>>i;
	
	vector< stack<pair<int,int > > > b(n);
	for(int i=0;i<b.size();i++){
		b[i]=compute(a[i]);
	}
	
	int ans=0;
	bool fl=true;
	for(auto i:b){
		if(!i.empty()){
			if(i.top().first==1){
				ans++;
				i.pop();
			}
		}else{
			fl=false;
			ans+=apolytic(b);
			break;
		}
	}
	if(fl){
		int mn=min(b);
		ans+=mn;
	}
	cout<<ans<<"\n";
	
	
	
}

