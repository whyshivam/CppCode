#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n){
	bool pr=1;
	for(int i=2;i<=sqrt(n);i++){
		if((n%i==0)||(i==1)){pr=0;break;
		}
		if(n==2){pr=1;break;
		}
	}
	return pr;
}
int main(){
	int n=1,g=1,count=0;
	int Prime [10];
	for(int i=0,j=2;i<10;j++){
		
		if(isPrime(j)){
			Prime[i]=j;
			i++;
		}
	}
	for(n=100;g<300;n++){
		
		for(int i=0;i<=10;i++){
		
			while(n%Prime[i]==0)
			{
				n/=i;
				count++;
			}	
			g*=(count+1);
		}
	}
	cout<<n;
}
