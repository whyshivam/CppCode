// CPP program to convert line to prefix 
#include <bits/stdc++.h> 
using namespace std; 

int rnk(char s){ 
	if (s=='^') return 3; 
	else if (s=='*'||s=='/') return 2; 
	else if (s=='-'||s=='+') return 1; 
	return 0; 
} 
bool dig(char c){
	if(c>='0'&&c<='9')
	return true;
	return false;
}
bool isSign(char c) { 
	return (!isalpha(c) && !isdigit(c)); 
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
string inToPost(string line) { 
	stack<char> st; 
	string ans; 
	line="("+line+")";
	for (int i = 0; i < line.size(); i++) { 
		if (isalpha(line[i]))//---------------------A,B 
			ans += line[i]; 
		else if( isdigit(line[i])) //--------------num
			ans += line[i]; 
		else if (line[i] == '(') //------------(
			st.push('('); 
		else if (line[i] == ')') { //-----------------)
			while (st.top() != '(') { 
				ans += st.top(); 
				st.pop(); 
			} 
			st.pop(); 
		}else { //----------------------sgn
			if (isSign(st.top())) { 
				while (rnk(line[i]) <= rnk(st.top())) { 
					ans += st.top(); 
					st.pop(); 
				} 
				st.push(line[i]); 
			} 
		} 
	} 
	return ans; 
} 

string inToPre(string line) { 
	int l = line.size();
	reverse(line.begin(), line.end()); 
	for (int i = 0; i < l; i++) { 

		if (line[i] == '(') { 
			line[i] = ')'; 
			i++; 
		} 
		else if (line[i] == ')') { 
			line[i] = '('; 
			i++; 
		} 
	} 
	string anspre = inToPost(line); 
	reverse(anspre.begin(), anspre.end()); 
	return anspre; 
} 

int main() 
{ 
	string s = ("(a-b/c)*(a/k-l)"); 
	cout << inToPre(s) << std::endl; 
	return 0; 
} 

