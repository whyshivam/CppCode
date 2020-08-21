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
#include<queue>
struct child{
	int val;
	int pos;
};
int main(){
	ll n,m;
	cin>>n>>m;
	queue<child> a;
	rep(n){
		child k;
		cin>>k.val;
		k.pos=i;
		a.push(k);
	}
	int ans=0;
	while(!a.empty()){
		if(a.front().val>m)
		{
			child k;
			k.val=a.front().val-m;
			k.pos=a.front().pos;
			a.pop();
			a.push(k);
		}
		else{
			ans=a.front().pos;
			a.pop();
		}
	}
	cout<<(ans+1);
	

}

