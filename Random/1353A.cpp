//Cut my wings and ask me to fly,
//to your astonishment I'll be lost in the sky
#include<bits/stdc++.h>
#include<algorithm>
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
	int t;
	cin>>t;
	while(t){
		long long int n,k;
		cin>>n>>k;
		vector<int> a(n);
		vector<int> b(n);
		rep(n){
			cin>>a[i];
	}
	rep(n){
		cin>>b[i];
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	rep(k){
		if(a[i]<=b[(n-i-1)])
		swap(a[i],b[(n-i-1)]);
		else
		break;
	}
	long long int sum=0;
	rep(n)
	sum+=a[i];
	cout<<sum<<"\n";
	
	
	
	
		t--;
	}

}

