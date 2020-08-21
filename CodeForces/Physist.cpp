#include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int x[n],y[n],z[n];
	long long int sx=0,sy=0,sz=0;
	while(n){
	    cin>>x[n-1]>>y[n-1]>>z[n-1];
	    sx+=x[n-1];
	    sy+=y[n-1];
	    sz+=z[n-1];
	    n--;
	}
	if(sx==0&&sy==0&&sz==0)
	cout<<"YES";
	else
	cout<<"NO";
	
	return 0;

}
