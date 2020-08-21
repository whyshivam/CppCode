//Cut my wings and ask me to fly,
//to your astonishment I'll be lost in the sky
#include<bits/stdc++.h>
#include<string>
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
		string s;
		cin>>s;
		bool k=false;
		ll i=0,f1=-1;
		while(s[i]=='0'&&i<n)
		i++;
		if(i<n)
		{
			f1=i;
			k=true;
		}
		i=n-1;
		while(s[i]=='1'&&i>=0)
		i--;
		if(i<0)
		k=false;
		
		
		if(i!=f1&&k){
			string l="";
			
			if(f1!=i+1)
			l="0";
			s=s.substr(0,f1)+l+s.substr(i+1,n-i-1);
			//cout<<f1<< "    "<<l<<"  " <<i<<"\n";
			
		}
		cout<<s<<"\n";
	
	
	
	}
}

