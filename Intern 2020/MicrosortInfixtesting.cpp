#include <bits/stdc++.h> 
using namespace std; 
int rnk(char C){ 
	if (C == '^') 
		return 3; 
	else if (C == '*' || C == '/') 
		return 2; 
	else if (C == '-' || C == '+') 
		return 1; 
	return 0; 
} 
bool dig(char c){
	if(c>='0'&&c<='9')
	return true;
	return false;
}
int eq(int a, int b, char op){ 
	if(op=='+') return (a+b);
	if(op=='*') return (a*b);
	if (op=='/') return (a/b);
	if(op=='-') return (a-b);
} 

int solve(string line){ 
	stack <int> ans; 
	stack <char> sgn; 
	for(int i=0;i<line.size();i++){ 
		if(line[i] == ' ') 
			continue;  
		else if(dig(line[i])){ //------------------------num
			int val = 0; 
			while((i < line.size()&&dig(line[i]))) { 
				val*=10;
				char tqw=line[i];
				int mnw=(int)tqw-48;
				val+=(mnw); 
				i++; 
			}
			ans.push(val); 
		} 
		else if(line[i] == '('){ //----------------------- (
			sgn.push(line[i]); 
		} 
		else if(line[i]==')'){//------------------------)
			while(!sgn.empty() && sgn.top() != '('){ 
				int b = ans.top(); 
				ans.pop(); 
				int a = ans.top(); 
				ans.pop(); 
				char op = sgn.top(); 
				sgn.pop(); 
				ans.push(eq(a, b, op)); 
			} 
			if(!sgn.empty()) sgn.pop(); 
		} 
		else   //----------------- sgn
		{ 
			while(!sgn.empty() && rnk(sgn.top()) >= rnk(line[i])){ 
				int b = ans.top(); 
				ans.pop(); 
				int a = ans.top(); 
				ans.pop(); 
				char op = sgn.top(); 
				sgn.pop(); 
				ans.push(eq(a, b, op)); 
				//cout<<a<<" "<<b<<" "<<op<<"\n";
			} 
			sgn.push(line[i]); 
		} 
	}
	while(!sgn.empty()){ 
		int b = ans.top(); 
		ans.pop(); 
		int a = ans.top(); 
		ans.pop(); 
		char op = sgn.top(); 
		sgn.pop(); 	
		ans.push(eq(a, b, op)); 
	} 
	return ans.top(); 
} 

int main() { 
	cout << solve("10 + 2 * 6") << "\n"; 
	cout << solve("100 * 2 + 12") << "\n"; 
	cout << solve("100 * ( 2 + 5 - 12 * 0 + 5 )") << "\n"; 
	cout << solve("100 * ( 2 + 12 ) / 14"); 
	return 0; 
} 

// This code is contributed by Nikhil jindal. 

