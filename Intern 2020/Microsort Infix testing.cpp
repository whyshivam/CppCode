
#include <bits/stdc++.h> 
using namespace std; 

int rnk(char s){ 
	if(s == '/'||s == '*') 
	return 1; 
	if(s == '+'||s == '-') 
	return 0; 
	return -1; 
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
		else if(line[i] == '('){ 
			sgn.push(line[i]); 
		} 
		else if(dig(line[i])){ 
			int val = 0; 
			while((i < line.size()) && (i< dig(line[i]))) { 
				val=val*10+ (line[i]-'0'); 
				i++; 
			}
			ans.push(val); 
		} 
		else if(line[i]==')'){
			while(!sgn.empty() && sgn.top() != '('){ 
				int b = ans.top(); 
				ans.pop(); 
				int a = ans.top(); 
				ans.pop(); 
				char op = sgn.top(); 
				sgn.pop(); 
				ans.push(eq(a, b, op)); 
			} 
			if(!sgn.empty()) 
			sgn.pop(); 
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

