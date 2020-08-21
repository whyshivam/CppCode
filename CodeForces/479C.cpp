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
struct date{
	ll a,b;
};
bool fn(date k, date j){
	if(k.a==j.a)
	return(k.b<j.b);
	
	
	return (k.a<j.a);
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	ll n;
	cin>>n;
	vector<date> date(n);
	rep(n){
		cin>>date[i].a>>date[i].b;
	}
	sort(date.begin(),date.end(),fn);
	
	int currdate=0;
	rep(n){
		if(currdate>date[i].b){
			currdate=date[i].a;
		}else{
			currdate=date[i].b;
		}
	}
	cout<<currdate<<"\n";
	

}

