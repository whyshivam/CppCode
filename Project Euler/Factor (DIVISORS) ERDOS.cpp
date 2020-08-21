#import<iostream>
#import<math.h>
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
int factor(int n){
	int act[n];int count=1; 

		for(int i=0;i<n;i++){
			act[i]=0;
		}
		int i=2;
			c:
	for(;i<=sqrt(n);i++)
	{
		if (bool(i))
		{
			if(n%i==0)
			{
				n/=i;
				act[i-1]++;
				goto c;
			}
			
		}
		cout<<"Testing"<<endl;
		count*=(act[i-1]+1);
	}
return count;
}
int main(){
	int p=0,i;
	for(i=100;;i++){
		if(factor(i)>=300){
			cout<<i;
			break;
		}
	}
	
}
