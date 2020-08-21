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


template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
 
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        vl A(N); F0R(i, N) cin >> A[i];
        ll P = 0;
        ll pre[N+1];
        pre[0] = 0;
        ll lo2 = 0;
        ll lo1 = 1e15;
        ll ans = 0;
        F0R(i, N) {
            if (i % 2 == 0) {
                P += A[i];
                pre[i+1] = pre[i] - A[i];
            } else {
                pre[i+1] = pre[i] + A[i];
            }
            cout <<"\t" <<P << " " << ans<<" " <<pre[i+1]<<endl;
            if ((i+1) % 2) {
                ckmin(lo1, pre[i+1]);
                ckmax(ans, pre[i+1] - lo1);
            } else {
                ckmin(lo2, pre[i+1]);
                ckmax(ans, pre[i+1] - lo2);
            }
     		 cout << P << " " << ans<<" " <<pre[i+1]<<endl;
 
        }
 
        cout << ans+P << endl;
    }
}

