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
#define f		 first
#define s		 second
#define pb		 push_back
#define mk		 make_pair
#define ex		 "\n"
int mx(long long int a)
{
	int d=0;
	while(a){
		int t=a%10;
		d=max(t,d);
		a/=10;
	}
	return d;
}
int mn(long long int a)
{
	int d=9;
	while(a){
		int t=a%10;
		d=min(t,d);
		a/=10;
		
	}
	return d;
}
long long int fun(long long int k, long long int a)
{
	long long int p=a;
	rep(k-1)
	{
		int mi=mn(p);
		int ma=mx(p);
		if(mi==0)
		break;
		p+=(mi*ma);
	}
	return p;
}
int main(){
	int t;
	cin>>t;
	while(t){
		long long int n;
		cin>>n;
		long long int k;
		cin>>k;
		cout<<fun(k,n)<<"\n";
		
		
		t--;
	}
}

