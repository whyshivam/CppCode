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
	rep(n) cin>>a[i];
	
	if(n==1)
	cout<<-1<<"\n";
	else if(n==2){
		ll k=a[1]-a[0];
		if(k==0)
		cout<<-1<<"\n";
		else{
			cout<<2<<"\n";
			cout<<(a[0]-k)<<" "<<a[1]+k<<"\n";
		}
	}else{
		ll k=a[1]-a[0],k2;
		ll ans=-1;
		ll p=0;
		for(ll i=1;i<n-1;i++){
			k2=a[i+1]-a[i];
			if(k2>k){
				ans=i;
				break;
			}else if(k2<k) {
				swap(k2,k);
				ans=0;
				break;
			}
		}
		if(k<0)
		cout<<k<<"\n";
		else if (ans==-1){
			cout<<n<<"\n";
			cout<<(a[0]-k)<<" "<<a[1]+k<<"\n";
		}else{
			cout<<1<<"\n";
			cout<<a[ans]+k;
		}
		
	}
		
	

}

