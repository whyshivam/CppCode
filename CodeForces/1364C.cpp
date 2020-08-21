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
	ll n;
	cin>>n;
	vector<ll> a(n);
	rep(n)
	cin>>a[i];
	
	vector<ll> b(n);
	ll y=a[n-1];
	ll x=0;
	ll k=1;
	bool fl=true;
	if(y==0){
		y=1;
		k=0;
	}
	rep(n){
		if(a[i]>i+1){
			fl=false;
		}
		if(a[i]==0&&a[i+1]==1)
		fl=false;
	}
	if(a[0]==0&&a[1]==1)
	fl=false;
	
	if(fl)
	for(ll i=n-1;i>=0;i--){
		if(i>0){
			k=1;
			if(a[i]!=a[i-1]){
				x=a[i];
				b[i]=a[i-1];
			}
			while(a[i]==a[i-1]){
				if(y-k==a[i]+1){
					y=y-k-1;
					k=0;
				}
				if((y-k)==x)
				{
					y=y-k;
					if(k==0)
					y--;
					//cout<<"Hey"<<y<<"Y";
				}
				if(y-k==1)
				{
					y=1;
					k=0;
				}
				b[i]=(y-k);
				y-=k;
				if(a[i-1]!=a[i-2]&&i>1)
					break;	
				if(i==1)
				break;
				i--;
			}
		}else{
			b[0]=1^a[0];
		}
	}
	
	if(fl){
		rep(n)
		cout<<b[i]<<" ";
		cout<<"\n";
	}
	else
	cout<<-1<<"\n";
	

}

