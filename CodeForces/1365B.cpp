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
struct Two{
	ll num;
	ll ty;
};
bool fun(Two i1, Two i2){
	return (i1.num < i2.num);
}
int main(){
ios_base::sync_with_stdio(0), cin.tie(0);
	cint{
		ll n;
		cin>>n;
		Two a[n];
		ll al[n];
		rep(n) 
		{
			ll k;
			cin>>k;
			a[i].num=k;
			al[i]=k;
		}
		rep(n) 
		{
			ll k;
			cin>>k;
			a[i].ty=k;
		}
		sort(a,a+n,fun);
		
		ll j=0;
		rep(n-1){
			if(a[i].ty!=a[i+1].ty){
				j++;
			//	if(j==2)
				break;
			}
		}
		rep(n){
			if(a[i].num!=al[i])
			{
				break;
			}
			else if (i==n-1)
			{
				j=1;
			}
		}
		if(j)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}

}

