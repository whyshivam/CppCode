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
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cint{
		ll n;
		cin>>n;
		int c=0;
		
		bool fl=true;
		vector<ll> a(n);
		rep(n){
			ll k;
			cin>>k;
			a[i]=k;
		}
		ll i=0;
		while(a[i]==(i+1)){
			i++;
			if(i==n)
			break;
		}
		ll l=i;
		i=n;
		while(a[i]==i+1){
			
			if(i==0){
				break;
			}
			i--;
		}
		ll r=i;
		//cout<<l<<" "<<r<<"\n";
		if(l==n)
		{
			cout<<"0\n";
		}
		else{
			
				for(int j=l;j<=r;j++){
					if(a[j]==j+1){
						fl=false;
						break;
					}
				}
				if(fl){
					cout<<"1\n";
				}else{
					cout<<"2\n";
				}
			
		}
		
		
	
	}

}

