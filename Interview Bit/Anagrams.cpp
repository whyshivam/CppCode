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
long long int hashf(string a, int p, int x){
    
    long long int sum=0;
    for( long long int i=0;i<a.size();i++){
        sum=((sum*x)+(int)a[i])%p;
    }
    
    return sum;
}

vector<vector<int> > anagrams(const vector<string> &A) {
    long long int p=10000007;
    long long int x=31;
    vector<vector<int> > ans;
    vector<vector< pair<string, int> > > a(10000);
    unordered_set <int> index;
    for(int i=0;i<ans.size();i++){
        index.insert(ans[i][0]);
        index.insert(ans[i][1]);
    }
    for(long long int i=0;i<A.size();i++){
    	string s=A[i];
		sort(s.begin(),s.end());
        long long int ha=(hashf(s,p,x)%10000);
        
        if(a[ha].empty())
        {
            a[ha].push_back(make_pair(s,i+1));
        }
        else{
        	
            for(int j=0;j<a[ha].size();j++){
                if(a[ha][j].first==s){
		
                    vector<int> pp(2);
                    pp[0]=a[ha][j].second;
                    pp[1]=i+1;
                    if(index.find(pp[0])!=index.end()){
                        for(int k=0;k<ans.size();k++){
                            if(ans[k][0]==pp[0]){
                                ans[k].push_back(pp[1]);
                                index.insert(pp[1]);
                            }
                        }
                    }else{
                        ans.push_back(pp);
                        index.insert(ans[i][0]);
                        index.insert(ans[i][1]);
                    }
                    
                    break;
                }else{
                    if(i==a[ha].size()-1){
                        a[ha].push_back(make_pair(s,i+1));
                        break;
                    }
                }
                
            }
        }
    }
   
    
    for(int i=1;i<=A.size();i++){
        if(index.find(i)==index.end()){
            vector<int> pp(1);
            pp[0]=i;
            ans.push_back(pp);
        }
    }
    return ans;
}

int main(){
	//ios_base::sync_with_stdio(0), cin.tie(0);
	ll n;
	cin>>n;
	vector<string> A(n);
	rep(n){
		cin>>A[i];
	}
	vector<vi > ans=anagrams(A);
	rep(ans.size()){
		FOR(j,0,ans[i].size()){
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}

}

