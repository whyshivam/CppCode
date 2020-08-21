//Cut my wings and ask me to fly,
//to your astonishment I'll be lost in the sky
#include<bits/stdc++.h>
using namespace std;
#define ull		 unsigned long long int
#define ll		 long long int
#define fast() 	 ios_base::sync_with_stdio(false); cin.tie(NULL);
#define rep(n)	 for(ll i=0;i<n;i++)
#define repj(n)  for(ll j=;j<n;j++)
#define MAX		 INT_MAX
#define MOD		 1000000007
#define cint	 ll t;for(cin>>t;t>0;t--)
#define f		 first
#define s		 second
#define pb		 push_back
#define mk		 make_pair
#define ex		 "\n"
bool solve(pair <ll,char> i1,pair <ll,char> i2){
	if(i1.first==i2.first){
		return(i1.second>i2.second);
	}
	return(i1.first<i2.first);	
	
}
ll bar(ll a,ll b){
	return((max(a,b))-min(a,b));
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cint{
		ll n;
		string k;
		cin>>n;
		cin>>k;
		sort(k.begin(),k.end());
		vector<pair <ll,char> > a;
		pair <ll, char> p;
		p.first=0;
		
		
		rep(n-1){
			p.first++;
			if(k[i]!=k[i+1]){
				p.second=k[i];
				a.pb(p);
				p.first=0;
			}
			
			if(i==n-2){
				if(k[i]==k[i+1]){
					p.second=k[i+1];
					a.pb(p);
				}else{
					p.first=1;
					p.second=k[i+1];
					a.pb(p);
				}
			}
		}
		
		sort(a.begin(),a.end(),solve);
		
		rep(a.size()){
			cout<<a[i].first<<" "<<a[i].second<<"\n";
		}
		
		
		
	
	
	
	
	}

}

