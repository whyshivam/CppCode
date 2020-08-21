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
void ready(vector<int> & a,vector<int> & b){
	ll l=1;
	ll r=1;
	ll i=1;
	a[0]=0;
	while(i<a.size()){
		b.pb(i);
		a[i]=1;
		i=l+r;
		r=l;
		l=i;
	}
	i=0;
	while(i<(log2(a.size()-1))){
		b.pb(pow(2,i));
		a[pow(2,i)]=1;
		i++;
	}
	sort(b.begin(),b.end());
	b.erase(unique(b.begin(),b.end()),b.end());

}
void steady(vector<int> & a ){
	for(ll i=1;i<a.size();i++){
		if(a[i]==0){
			for(int j=0;j+i<a.size();j++){
				if(a[i+j]==1){
					i=i+j;
					break;
				}
				a[i+j]=a[j+1]+a[i-1];
				//cout<<a[i+j]<<" "<<(i+j)<<" "<<j+1<<" "<<(i-1)<<"\n";
			}
		}
	}
}
ll print(vector<int> a){
	ll c=0;
	for(ll i=1;i<a.size();i++){
		
		if(!a[i]){
				c++;
			cout<<i<<" "<<c<<" ";
		
		}
		
	}
	//cout<<c<<"\n";
	return c;
}
void go(vector<int> &a,vector<int> &b){
	for(ll i=1;i<a.size();i++){
		if(a[i]==0)
		{
			for(ll j=0;b[j]<i;j++){
				if(!a[i]){
					a[i]=!(a[i-b[j]]);
					if(a[i]){
					//	cout<<i<<" "<<b[j]<<" "<<(i-b[j])<<"\n";
					}
				}else{
					break;
				}
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t=1000001;
	vector<int> a(t,0);
	vector<int> b;
	ready(a,b);
	for(int i=0;i<b.size();i++)
	cout<<b[i]<<"\t";
	cout<<"\n";
	go(a,b);
	ll k= print(a);
	cout<<"Ans "<<k<<"\n";
	

}

