#include<iostream>
using namespace std;
int countfac(long long int n){
	long long int cu=0;
	for(long long int i=1;i<=n;i++){
	
		if(n%i==0){cu++;
		}
	}
	return cu;
}
int main(){
	long long int m=1,k,l=1;
	for(;;){
		k=countfac(m*(m+1))/2;
		if(k>l){l=k;
		}
		cout<<l<<endl;
		if (l>=500){
			cout<<l<<endl<<(m*(m+1))/2<<endl;
			break;
		}
		m++;
	}
}
