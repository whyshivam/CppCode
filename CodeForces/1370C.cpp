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
ll pr(ll n){
	for(ll i=3;i<=n;i+=2){
		if(n%i==0)
		return i;
	}
	return -1;
}
bool pw(ll n ){
	ll c=log2(n);
	ll k=pow(2,c);
	if(k==n)
	return true;
	return false;
}
bool prime(ll n){
	bool fl=true;
	for(ll i=2;i*i<n;i++)
	{
		if(n%i==0)
		return false;
	}
	return fl;
}
ll func(ll n){
	ll i=0;
	while(n>0)
	{
		
		if(pw(n)){
			n--;
			if(n==1)
			i--;
			
			i+=2;
			return i;	
		}else{
			ll c=0;
			ll k1=-1;
			if(n%2==1)
			{
				i++;
				break;
			}else{
				ll c=0;
				ll k=pr(n);
				while(n%2==0){
					c++;
					n/=2;
				}
				
				if(c==1)
				{
					if(prime(n)){
						return i;
					}else{
						i++;
						return i;
					}
				}
				else{
					i++;
					return i;
				}
			}
			
		}
	}
	return i;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cint{
		ll n;
		cin>>n;
		ll k=func(n);
		//cout<<k<<"\n";
		if (k%2==1)
		cout<<"Ashishgup\n";
		else
		cout<<"FastestFinger\n";
	
	}

}

