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
void funr(vector<vector<int> > a,vector<vector<int> > & val,int i,int j){
	cout<<"i "<<i<<"\tj "<<j<<"\n";
	while(j>=0){
		if(a[i][j]==0)
		break;
		//val[i][j]=val[i+1][j]+val[i][j+1];
		val[i][j]=10;
		j--;
	}
}
void fun(vector<vector<int> > a,vector<vector<int> > & val,int i,int j){
	if(a[i][j]==1){
			if(i>=0&&j>=0)
			val[i][j]=val[i+1][j]+val[i][j+1];
			
			if(i>0){
				fun(a,val,i-1,j);
			}
			if(j>0){
				fun(a,val,i,j-1);
			}
	}
	
}
void funu(vector<vector<int> > a,vector<vector<int> > & val,int i,int j){
		cout<<"i "<<i<<"\tj "<<j<<"\n";
	while(i>=0){
		if(a[i][j]==0)
		break;
		val[i][j]=10;
		//val[i][j]=val[i+1][j]+val[i][j+1];
		i--;
	}
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	long long int n,m;
	cin>>n>>m;
	vector<vector<int> > a(n,(vector<int> (m,0)));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int k;
			cin>>k;
			a[i][j]=k;
		}
	}
	
	vector<vector<int> > val(n+1);
	rep(n+1)
	val[i]= vector<int> (m+1,0);
	
	for(int t=1;t<=n;t++){
		int i=n-t,j=m-t;
			//cout<<"Passed";
		if(t==1&&a[n-1][m-1]==1){
			val[i][j]=1;
			fun(a,val,i,j-1);
			fun(a,val,i-1,j);
		}
		else{
			if(i<0||j<0)
			break;
			
			fun(a,val,i,j);
			
		}
	
	}
	cout<<"\n";
	for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++){
			cout<<val[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<val[0][0]<"\n";
	
}

