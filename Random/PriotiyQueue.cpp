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
int Parent(int n){
	int k=(n-1)/2;
	return k;
}
void Print(vector<int> a)
{
	rep(a.size())
	cout<<a[i]<<" ";
	cout<<"\n";
}
int main(){
	ll n;
	cin>>n;
	vector<int> a(n);
	vector< pair <int,int> >b;
	rep(n)
	cin>>a[i];
	rep(n){
		int j=i;
		int k=Parent(j);
		while(j>0&&a[k]>=a[j]){
			swap(a[k],a[j]);
			b.push_back(make_pair(j,k));
			//cout<<j<<" "<<k<<"\n";
			//	Print(a);
			j=k;
			k=Parent(j);
		}
		
	}
	cout<<b.size()<<"\n";
	rep(b.size()){
		cout << b[i].first << " " << b[i].second << "\n";
	}

}

