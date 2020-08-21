#include<bits/stdc++.h>
using namespace std;
int eq(int a, int b, char op){ 
	if(op=='+') return (a+b);
	if(op=='*') return (a*b);
	if (op=='/') return (a/b);
	if(op=='-') return (a-b);
} 
int solvePost(string k){
	stack<int> st;
	for(int i=0;i<k.size();i++){
		if(k[i]==' ')
		continue;
		else if(isdigit(k[i])){//----------------------num
			int val=0;
			//cout<<"Num "<<val<<"\t"<<k[i]<<"\n";
			while(i<k.size()&&isdigit(k[i])){
				val*=10;
				val+=(k[i]-'0');
				i++;
			st.push(val);
		}
		}else {//--------------------------sign
			int b=st.top();
			st.pop();
			int a=st.top();
			st.pop();
			int c=eq(a,b,k[i]);
			st.push(c);
			//cout<<a<<" "<<k[i]<<" "<<b<<" ="<<c<<"\n";
		}
	}
	return st.top();
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	double k=546.3258;
	int p=(k*1000);
	double t=(1.00*p/1000.000);
	cout<<t<<"\n";
	cout<<solvePost("2 3 1 * + 9 -");
}

