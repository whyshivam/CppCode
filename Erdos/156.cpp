//Cut my wings and ask me to fly,
//to your astonishment I'll be lost in the sky
#include<bits/stdc++.h>
using namespace std;
#define ull		 unsigned long long int
#define ll		 long long int
#define fast() 	 ios_base::sync_with_stdio(false); cin.tie(NULL);
#define rep(n)	 for(ll i=0;i<n;i++)
#define repj(n)  for(ll j=0;j<n;j++)
#define MAX		 INT_MAX
#define MOD		 1000000007
#define cint	 ll t;for(cin>>t;t>0;t--)
#define f		 first
#define s		 second
#define pb		 push_back
#define mk		 make_pair
#define ex		 "\n"
int fn(vector<vector<int> > &a, ll j,ll i){
	if(j<=i||i==0)
	{
		return (a[j][i]);
	}
	if(j>(i*i))
	return 0;
	
	for (int k=i;k>=1;k--){
		a[j][i]+=fn(a,(j-k),(k-1));
	}
	return (a[j][i]);
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n=1+196;
	vector<vector<int> > a(n);
	rep(n)
	a[i]=vector<int>(n,0);
	
	
	
	for(int i=1;i<n;i++){
		for(int j=1;j<i;j++){
			a[i][i]+=a[j][i-j-1];
			//cout<<i<<" j > "<<j<<" i-j-1 > "<<(i-j-1)<<"\n"; 
			
		}
		a[i][i]++;
		for(int j=i;j<n;j++){
			a[i][j]=a[i][i];
		}
		for(int j=i+1;j<n;j++){
			a[j][i]=fn(a,j,i);
		}
	}
	rep(n){
		cout<<i<<" "<<a[i][i];
		cout<<"\n";
	}
}

