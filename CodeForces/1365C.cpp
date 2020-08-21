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
ll fubn(vector<ll> &a, vector<ll> &b ,ll j){
	ll c=0;
	vector<ll> a1,a2,st1,st2;
	rep(a.size()){
		if(j+i<a.size()){
			if(a[j+i]==b[i]){
				c++;
				cout<<b[i]<<" --\n";
				st1.push_back(j+i);
				st2.push_back(i);
			
				
			}	
		}else{
			if(a[j+i-a.size()]==b[i]){
				c++;
				cout<<b[i]<<" --\n";
				st1.push_back(j+i-a.size());
				st2.push_back(i);
				
			}
		}
}

	sort(st1.begin(),st1.end());
	ll k=0;
	rep(st2.size()){
			b.erase(b.begin()+st2[i]-k);
			k++;
	}
	k=0;
	rep(st1.size()){
		a.erase(a.begin()+st1[i]-k);
		k++;
	}

	
	return c;
}
int main(){
ios_base::sync_with_stdio(0), cin.tie(0);
	ll n;
	cin>>n;
	vector<ll> a(n),b(n);
	rep(n){
		cin>>a[i];
	}
	rep(n){
		cin>>b[i];
	}
	ll k=0;
	rep(a.size()){
		k=max(fubn(a,b,i),k);
		if(k>=(n/2)+1)
		break;
	}
	cout<<k<<"\n";
}

