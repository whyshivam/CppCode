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
int main(){
	ll t;
	cin>>t;
	ll x=0;
	while(t)
	{
		string n;
		cin>>n;
		if(n[0]=='+'||n[n.length()-1]=='+'){
			x++;
		}
		else
		{
			x--;
	}
		
		t--;
	}
	cout<<x;
}

