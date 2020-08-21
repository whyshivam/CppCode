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
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cint{
		ll n,x;
		cin>>n>>x;
		vector<ll> a(n),s(n);
		ll k=0;
		vector<ll> jk;
		bool p=true;
		rep(n){
			cin>>a[i];
			if(a[i]%x!=0)
			{
				k=1;
				jk.pb(i);
				p=false;
			}
		}
		if(p==true){
			k=-1;
		}else{
			s[0]=a[0];
			rep(n-1){
				s[i+1]=a[i+1]+s[i];
				if(s[i+1]%x!=0)
				k=(i+2);
			}
			for(ll i=n-1;i>k;i--){
			//	cout<<"HHH "<<k<<"    "<<n<<"\n";
			ll h=0;
				for(ll j=jk[h];j+i-1<n;j=jk[h+1]){
					ll an=s[j-1],pr=s[j+i-1];
					//cout<<j<<" "<< i<< " "<<(pr-an)<<"\n";
					if((pr-an)%x!=0){
						k=i;
						i=0;
						break;
					}
				}
			}
		}
		cout<<k<<"\n";
		
	
	
	
	
	
	}

}

