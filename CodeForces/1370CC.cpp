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
bool prime(ll n){
	bool fl=true;
	for(ll i=2;i*i<=n;i++){
		if(n%i==0)
		return false;
	}
	return true;
}
bool func(ll n){
	if(n==1)
	return false;
	if(n==2)
	return true;
	
	
	if(n%2==1){
		return true;
	}else{
		ll c=log2(n);
		if(pow(2,c)==n){
			return false;
		}else{
			c=0;
			while(n%2==0){
				c++;
				n/=2;
			}
			//cout<<c<<" <---- c\n";
			
			if(c==1){
				if(prime(n)){
					return false;
					cout<<"bingo\n";
				}else{
					return true;
				}
			}else{
				return true;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cint{
		ll n;
		cin>>n;
		if(func(n))
		cout<<"Ashishgup\n";
		else
		cout<<"FastestFinger\n";
	}

}

