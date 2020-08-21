#include<bits/stdc++.h>
using namespace std;
void arrange(string &q){
	int l=q.size();
	for(int i=1;i<l;i++){
		if(q[i-1]<q[i])
		{
			swap(q[i-1],q[i]);
			i++;
		}
	}
}

int main(){
	int n,t;
	cin>>n>>t;
	string q;
	cin>>q;
	for(int i=0;i<t;i++){
		arrange(q);
	}
	cout<<q;
}
