#include<iostream>
using namespace std;
int main(){
	int n1=0,n2=1,sum=0;
	for (int i=1;i<50;i++){
	n1+=n2;
	n2+=n1;
	cout<<n1<<"\n"<<n2<<endl;
	}

}
